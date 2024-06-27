//
// Created by danis on 12/8/2023.
//
#include "BST_Node.cpp"
class BST {
public:
    BST_Node* root;

    // Constructor
    BST() : root(nullptr) {}

    // Function to insert a value into the BST
    BST_Node* insertBST(BST_Node* root, int val) {
        if (root == nullptr) {
            return new BST_Node(val);
        }

        if (val > root->data) {
            root->left = insertBST(root->left, val);
        } else {
            // if val >= root data
            root->right = insertBST(root->right, val);
        }

        return root;
    }

    // Wrapper function to insert into the BST
    void insert(int val) {
        root = insertBST(root, val);
    }

    // Function to check if the BST is valid
    bool isValidBST(BST_Node* root, int lower, int upper) {
        if (root == nullptr) {
            return true;
        }

        if (root->data <= lower || root->data >= upper) {
            return false;
        }

        return isValidBST(root->left, lower, root->data) &&
               isValidBST(root->right, root->data, upper);
    }

    // Wrapper function to check if the BST is valid
    bool isValid() {
        return isValidBST(root, -10000, 10000);
    }

};