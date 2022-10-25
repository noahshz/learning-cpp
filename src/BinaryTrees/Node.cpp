#include <iostream>
#include "Node.h"

Node::Node(unsigned int value) {
    this->data = value;
    this->left = NULL;
    this->right = NULL;
}
Node::~Node() {
    delete this;
}