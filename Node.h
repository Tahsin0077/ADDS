#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* link;
public:
    Node(int data, Node* link);
    int getData();
    void setData(int value);
    Node* getLink();
    void setLink(Node* next);
    ~Node();
};

#endif
