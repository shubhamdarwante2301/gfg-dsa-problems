//height of binary tree
//time complexity O(n) n = number of nodes in a tree
//Auxiliary space O(h) 

#include<iostream>
using namespace std;

struct Node 
{
    int data;
    Node *left, *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};

int height(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    int h = height(root);
    cout<<"height of a binary tree is = "<<h;
    return 0;
}