#include <iostream>
#include <string>

#ifndef NODE_H
#define NODE_H

class Node {
    public:
        unsigned int data;
        Node* left;
        Node* right;
        Node(unsigned int value);
        ~Node();
};

#endif