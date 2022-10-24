#include <iostream>
#include <string>

#ifndef NODE_H
#define NODE_H

class Node {
    public:
        unsigned int id;
        unsigned short age;
        std::string name;
        Node* LeftNode;
        Node* RightNode;
        Node();
        ~Node();
};

#endif