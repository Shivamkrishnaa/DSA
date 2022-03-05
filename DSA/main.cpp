//
//  main.cpp
//  DSA - PRE ORDER TRAVERSAL
//
//  Created by shivam krishna on 05/03/22.
//
#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* newNode(int data){
    node* element = new struct node;
    element->left = NULL;
    element->right = NULL;
    element->data = data;
    return element;
}
void display(node * node){
    if(node==NULL) return;
    cout<<node->data<<endl;
    display(node->left);
    display(node->right);
}
int main() {
    node* root = newNode(1);
    root->right = newNode(3);
    root->left = newNode(2);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    display(root);
    // 1 2 4 5 3
    return 0;
}
