#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};


Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void pre_order(Node *node){
    cout << node->data << endl;
    if(node->left != NULL){
        pre_order(node->left);
    }if(node->right != NULL){
        pre_order(node->right);
    }
}


int main (){

    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    pre_order(root);
    return 0;
}