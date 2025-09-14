#include "LinkedList.h"
#include <limits>
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
    this->head = nullptr;
    this->len = 0;
}

LinkedList::LinkedList(int* array, int len) {
    this->head = nullptr;
    this->len = 0;
    for (int i = 0; i < len; i++) {
        insertPosition(i + 1, array[i]);
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos <= 1) pos = 1;
    else if (pos > this->len) pos = this->len + 1;
    if (pos == 1) {
        this->head = new Node(newNum, this->head);
    } else {
        Node* prev = this->getNode(pos - 1);
        prev->setLink(new Node(newNum, prev->getLink()));
    }
    this->len++;
}

bool LinkedList::deletePosition(int pos) {
    if (pos < 1 || pos > this->len) return false;
    Node* removed;
    if (pos == 1) {
        removed = this->head;
        this->head = this->head->getLink();
    } else {
        Node* prev = this->getNode(pos - 1);
        removed = prev->getLink();
        prev->setLink(removed->getLink());
    }
    delete removed;
    this->len--;
    return true;
}

int LinkedList::get(int pos) {
    Node* node = this->getNode(pos);
    if (!node) return numeric_limits<int>::max();
    return node->getData();
}

Node* LinkedList::getNode(int pos) {
    if (pos < 1 || pos > this->len) return nullptr;
    Node* current = this->head;
    for (int i = 1; i < pos; i++) {
        current = current->getLink();
    }
    return current;
}

void LinkedList::setHead(Node* link) {
    this->head = link;
}

void LinkedList::setLen(int len) {
    this->len = len;
}

int LinkedList::search(int target) {
    Node* current = this->head;
    int index = 1;
    while (current) {
        if (current->getData() == target) return index;
        current = current->getLink();
        index++;
    }
    return -1;
}

void LinkedList::printList() {
    if (this->len == 0) return;
    Node* current = this->head;
    cout << "[";
    for (int i = 1; i < this->len; i++) {
        cout << current->getData() << " ";
        current = current->getLink();
    }
    cout << current->getData() << "]" << endl;
}

LinkedList::~LinkedList() {
    Node* current = this->head;
    while (current) {
        Node* temp = current;
        current = current->getLink();
        delete temp;
    }
    this->head = nullptr;
    this->len = 0;
}
