#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node*left;
	Node*right;
};

void Print(Node*root)
{
	if (!root)
		return;
	Print(root->left);
	cout << root->val << "  ";
	Print(root->right);

}

void AddRecursive(Node*&root, int val)
{
	if (root == nullptr)
		root = new Node{ val, nullptr, nullptr };
	else if (val < root->val)
		AddRecursive(root->left, val);
	else
		AddRecursive(root->right, val);	
}

/*void AddIterative(Node*&root, int val)
{
	if (root == nullptr)
		root = new Node{ val, nullptr, nullptr };
	Node* tmp = root;
	while
}*/


void Delete_memory(Node*&root)
{
	if (!root)
		return;
	Delete_memory(root->left);
	Delete_memory(root->right);
	delete root;
	root = nullptr;
	
}


int main()
{
	Node*root = nullptr;
	AddRecursive(root, 15);
	AddRecursive(root, 5);
	AddRecursive(root, 19);
	AddRecursive(root, 1);

	Print (root);

	Delete_memory(root);

	return 0;

}