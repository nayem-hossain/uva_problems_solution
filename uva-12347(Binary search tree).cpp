#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Node
{
public:// a binary search tree has the root-value, a left-child pointer_variable
    // and a right-child pointer_variable
    int key;
    Node *left, *right;
};


// Function to create a new node having given key


Node* newNode(int data)
{
    Node* node = new Node;//memory allocation with new in c++
    node->key = data;
    node->left = node->right = NULL;

    return node;
}


// Function to print the post-order traversal


void PRINTpostorder(Node* root)
{

    if (root == NULL)
        return;


    PRINTpostorder(root->left);
    PRINTpostorder(root->right);
    cout<<root->key <<endl;

}


// Function to print the in-order traversal


void PRINTinorder(Node* root)
{
    if (root == NULL)
        return;



    PRINTinorder(root->left);
    cout << root->key << " ";
    PRINTinorder(root->right);
}

Node* buildTree(vector<int> const &preorder, int& preIndex,int min, int max)
{
    if (preIndex == preorder.size())
    {
        return NULL;
    }

    // Return if next element of preorder traversal is not in the valid range
    int val = preorder[preIndex];
    if (val < min || val > max)
        return NULL;



    // Construct the root node and increment pre-Index
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
    vector<int>preorder;
    preorder.push_back(50);
    preorder.push_back(30);
    preorder.push_back(24);
    preorder.push_back(5);
    preorder.push_back(28);
    preorder.push_back(45);
    preorder.push_back(98);
    preorder.push_back(52);
    preorder.push_back(60);

    Node *root = buildTree(preorder);

	cout << "post-order Traversal of BST is : ";
	PRINTpostorder(root);

return 0;

}
