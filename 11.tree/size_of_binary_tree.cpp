//size of binary tree

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

int countNode(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return 1+countNode(root->left)+countNode(root->right);
    }

}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    int total = countNode(root);

    cout<<total;
    return 0;
}