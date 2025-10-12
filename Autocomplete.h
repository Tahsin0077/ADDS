#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <string>
#include <vector>
#include <unordered_map>
#include "TrieNode.h"

using namespace std;

class Autocomplete {
    TrieNode* root;
    void collect(TrieNode* node, string prefix, vector<string>& result);
public:
    Autocomplete();
    void insert(string word);
    vector<string> getSuggestions(string partialWord);
};
#endif