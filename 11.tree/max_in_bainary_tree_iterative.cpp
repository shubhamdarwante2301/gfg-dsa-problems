// maximum in binary tree
//time complexity O(n)
//space complexity O(w) w = width of a binary tree
#include <iostream>
#include <queue>
#include <climits>
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

int getMax(Node *root)
{
    if(root == NULL)
    {
        return INT_MIN;
    }
    queue<Node*> q;
    q.push(root);
    int maxi = INT_MIN;
    while(q.empty()==false)
    {
        int count = q.size();
        
        for(int i=0; i<count; i++)
        {
            Node *curr = q.front();
            q.pop();
            maxi = max(maxi, curr->data);
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
            
        }
    }
    return maxi;
    
}

int main() {
    // Write C++ code here
    
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(60);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    
    int maximum = getMax(root);
    cout<<maximum;
    return 0;
}