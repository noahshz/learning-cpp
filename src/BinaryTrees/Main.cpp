#include <iostream>

#include "Node.cpp"

void awaitInput();

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    awaitInput();
}
void awaitInput() {
    std::string input;
    std::cin >> input;
}