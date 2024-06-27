#include <iostream>

//
// Created by danis on 11/23/2023.
//
class BST_Node{
public:
    int data;
    BST_Node *left , *right;
    BST_Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;

    }

    void inorder(BST_Node* root){
        if(root == NULL){return; }
        inorder(root->left);
        std::cout<<root->data;
        inorder(root->right);


    }
    BST_Node* insertBST(BST_Node* root , int val){

        if(root ==  NULL){
            return new BST_Node(val);
        }
        if(val < root->data){
            root->left = insertBST(root->left , val);
        }else {
            //if val > root data
            root->right = insertBST(root->right , val);

        }
        return root;
    }








};
