//binary tree

#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    Node *root = new Node(50);
    root->left = new Node(40);
    root->right = new Node(60);
    root->left->left = new Node(30);
    root->right->right = new Node(70);
    return 0;
}