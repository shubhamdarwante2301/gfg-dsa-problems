//level order traversal line by line
//breadth first traversal line by line
//time complexity O(n)
//auxiliary space thitha(w)  w=width of a tree
//approach 1

#include<iostream>
#include<queue>
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

void print(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 1)
    {
        Node *curr = q.front();
        q.pop();
        if(curr == NULL)
        {
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";
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

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    print(root);
    return 0;
}