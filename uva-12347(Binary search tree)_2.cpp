#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Node
{
public:
    int key;
    Node *left, *right;
};

Node* newNode(int data)
{
    Node* node = new Node;
    node->key = data;
    node->left = node->right = NULL;

    return node;
}

void PRINTpostorder(Node* root)
{

    if (root == NULL)
        return;


    PRINTpostorder(root->left);
    PRINTpostorder(root->right);
    cout<< root->key << endl;

}

void PRINTinorder(Node* root)
{
    if (root == NULL)
        return;


    PRINTinorder(root->left);
    cout << root->key <<endl;
    PRINTinorder(root->right);
}

Node* buildTree(vector<int> const &preorder, int& preIndex,int min, int max)
{
    if (preIndex == preorder.size())
    {
        return NULL;
    }

    int val = preorder[preIndex];
    if (val < min || val > max)
        return NULL;


    Node* root = newNode(val);
    preIndex++;


    root->left = buildTree(preorder, preIndex, min, val-1);
    root->right = buildTree(preorder, preIndex, val+1, max);

    return root;
}

Node* buildTree(vector<int> const &preorder)
{
    int preIndex = 0;

    return buildTree(preorder, preIndex, INT_MIN, INT_MAX);
}

int main()
{
    int input;
    vector<int>preorder;
     while(scanf("%d", &input)== 1)
    {
        preorder.push_back(input);
    }

    Node *root = buildTree(preorder);
	PRINTpostorder(root);

return 0;

}


