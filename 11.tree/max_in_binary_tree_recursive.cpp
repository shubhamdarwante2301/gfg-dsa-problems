//maximum in binary tree

#include<iostream>
#include<algorithm>
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

int findMax(Node *root)
{
    if(root == NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->data, max(findMax(root->left), findMax(root->right)));
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

    int maximum = findMax(root);
    cout<<maximum;
    return 0;
}