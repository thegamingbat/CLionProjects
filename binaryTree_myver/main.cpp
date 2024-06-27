#include <iostream>

#include "BST.cpp"
using namespace std;

class Node{
public:
   int data;
    Node* left;
    Node* right;
    explicit Node(int val){
         data = val;
         left=nullptr;
         right=nullptr;
    }

};
void preorder(Node* root){
    if(root == NULL){return; }
    std::cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root == NULL){return; }
    inorder(root->left);
    std::cout<<root->data;
    inorder(root->right);


}
void postorder(Node* root){
    if(root == NULL){return; }
    postorder(root->left);

    postorder(  root->right);
    std::cout<<root->data;


}





//int main() {







    /* Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);


             1
     *    /     \
     *    2     3
     *   / \   / \
     *   4  5  6  7
     *
    cout<< " preorder is ";  preorder(root); cout<< endl;//starts from top goes left node then right ,then go right node then left ,then right
    cout<< " inorder is ";  inorder(root); cout<< endl;
    cout<< " postorder is ";  postorder(root); cout<< endl;*/





















//}
int main() {
    BST bst;

    // Insert values into the BST
    bst.insert(2);
    bst.insert(1);
    bst.insert(3);

    // Check if the BST is valid
    if (bst.isValid()) {
        std::cout << "The BST is valid." << std::endl;
    } else {
        std::cout << "The BST is not valid." << std::endl;
    }

    return 0;
}
