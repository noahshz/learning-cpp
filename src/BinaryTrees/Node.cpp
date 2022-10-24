#include <iostream>
#include "Node.h"

Node::Node() {
    this->LeftNode = NULL;
    this->RightNode = NULL;
}
Node::~Node() {
    std::cout << "destruct" << std::endl;
}