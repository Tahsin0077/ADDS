#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

using namespace std;

class Document {
    public:
        string name;
        int id;
        int license_limit;
        int members_of_access = 0;
};
#endif