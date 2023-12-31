#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode* root;

    TreeNode* insertRecursive(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->data) {
            node->left = insertRecursive(node->left, value);
        } else if (value > node->data) {
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }

    void printInOrder(TreeNode* node) {
        if (node != nullptr) {
            printInOrder(node->left);
            std::cout << node->data << " ";
            printInOrder(node->right);
        }
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    void printInOrder() {
        printInOrder(root);
        std::cout << std::endl;
    }
};

int main() {
    BinarySearchTree bst;

    // Inserting the given data into the binary search tree
    int data[] = {4, 3, 1, 7, 5, 21, 32, 56, 34, 87, 67, 75};
    int size = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < size; ++i) {
        bst.insert(data[i]);
    }

    // Printing the binary search tree in-order
    std::cout << "In-order traversal of the binary search tree:\n";
    bst.printInOrder();

    return 0;
}
