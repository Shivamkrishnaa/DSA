//
//  main.cpp
//  DSA
//
//  Created by shivam krishna on 05/03/22.
//

#include <iostream>
using namespace std;
struct node {
    int data;
    node* left;
    node* right;
};
node* newNode(int data){
    node * element = new struct node;
    element->data = data;
    element->left = NULL;
    element->right = NULL;
    return element;
}
void display(node* root){
    if(root == NULL) return;
    display(root->left);
    cout<<root->data<<endl;
    display(root->right);
}
int main() {
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    display(root);
}
