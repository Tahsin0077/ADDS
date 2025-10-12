#pragma once
#include <string>
#include <vector>
#include "TrieNode.h"

using namespace std;

class PrefixMatcher {
private:
    TrieNode* root;
    void collectHelper(TrieNode* node, string path, vector<string>& result);

public:
    PrefixMatcher();
    void insert(string address, int routerNumber);
    int selectRouter(string networkAddress);
    vector<string> getSuggestions(string prefix);
};