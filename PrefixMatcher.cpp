#include "PrefixMatcher.h"
#include <iostream>
#include <vector>

using namespace std;

PrefixMatcher::PrefixMatcher() {
    root = new TrieNode();
}
void PrefixMatcher::insert(string address, int routerNumber) {
    TrieNode* current = root;
    for (char c : address) {
        if (!current->children.count(c)) {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->routerNumber = routerNumber; 
}
int PrefixMatcher::selectRouter(string networkAddress) {
    TrieNode* current = root;
    int lastRouterNumber = -1; 

    for (char c : networkAddress) {
        if (!current->children.count(c)) {
            break; 
        }
        current = current->children[c];
        if (current->routerNumber != -1) {
            lastRouterNumber = current->routerNumber;
        }
    }
    return lastRouterNumber; 
}

vector<string> PrefixMatcher::getSuggestions(string prefix) {
    vector<string> result;
    TrieNode* node = root;

    for (char c : prefix) {
        if (!node->children.count(c)) {
            return result;
        }
        node = node->children[c];
    }

    collectHelper(node, prefix, result);
    return result;
}

void PrefixMatcher::collectHelper(TrieNode* node, string path, vector<string>& result) {
    if (node->routerNumber != -1) {
        result.push_back(path);
    }

    for (auto& pair : node->children) {
        collectHelper(pair.second, path + pair.first, result);
    }
}