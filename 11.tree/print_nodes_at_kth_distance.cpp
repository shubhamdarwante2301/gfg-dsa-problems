//print nodes at kth distance from the root
//time complexity O(n)
//auxiliary space O(h)

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

void printKthNode(Node *root, int k)
{
    if(root == NULL)
    {
        return;
    }
    if(k == 0)
    {
        cout<<root->data<<" ";
    }
    else
    {
        printKthNode(root->left, k-1);
        printKthNode(root->right, k-1);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);

    int k = 2;
    printKthNode(root, k);

    return 0;
}