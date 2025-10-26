#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>
#include "Document.h"

using namespace std;

class DocumentManager {
private:
    unordered_map<string, Document> documents;
    unordered_map<int, string> idToName;
    unordered_set<int> patrons;

public:
    void addDocument(string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif
