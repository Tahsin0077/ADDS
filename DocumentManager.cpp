#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    Document doc = {name, id, license_limit, 0};
    documents[name] = doc;
    idToName[id] = name;
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    auto it = documents.find(name);
    if (it != documents.end())
        return it->second.id;
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end()) return false;
    auto itName = idToName.find(docid);
    if (itName == idToName.end()) return false;
    auto& doc = documents[itName->second];
    if (doc.members_of_access < doc.license_limit) {
        doc.members_of_access++;
        return true;
    }
    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end()) return;
    auto itName = idToName.find(docid);
    if (itName == idToName.end()) return;
    auto& doc = documents[itName->second];
    if (doc.members_of_access > 0)
        doc.members_of_access--;
}