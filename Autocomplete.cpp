#include "Autocomplete.h"

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

void Autocomplete::insert(string word) {
    TrieNode* current = root;
    for (char c : word) {
        if (!current->children.count(c)) {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->isEnd = true;
}

vector<string> Autocomplete::getSuggestions(string partialWord) {
    vector<string> result;
    TrieNode* current = root;
    for (char c : partialWord) {
        if (!current->children.count(c)) {
            return result;  
        }
        current = current->children[c];
    }
    collect(current, partialWord, result);
    return result;
}

void Autocomplete::collect(TrieNode* node, string prefix, vector<string>& result) {
    if (node->isEnd) {
        result.push_back(prefix);
    }
    for (auto& pair : node->children) {
        collect(pair.second, prefix + pair.first, result);
    }
}