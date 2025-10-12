#ifndef TRIENODE_H
#define TRIENODE_H

#include <unordered_map>
#include <string>


struct TrieNode {
    std::unordered_map<char, TrieNode*> children;
    bool isEnd = false;         
    int routerNumber = -1;     

    TrieNode() = default;
};

#endif