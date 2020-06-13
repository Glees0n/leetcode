#include <iostream>
#include <stack>
#include <vector>

// TreeNode definition
struct TreeNode 
{
	int val; // The value stored in the node
    TreeNode *left; // The nodes left child
    TreeNode *right; // The nodes right child
};


// Creates a new TreeNode
TreeNode* newNode(int x)
{
	TreeNode *node = new TreeNode; // Instantiates a new TreeNode

	node->val = x;
	node->left = nullptr;
	node->right = nullptr;

	return node;
}

// Traverses the binary tree via pre-order traversal
std::vector<int> preorderTraversal(TreeNode* root)
{
	std::vector<int> preorder;
	std::stack<TreeNode*> nodes;

	// If there is no root node
	if (root == nullptr)
	{
		return preorder; // Return the empty preorder vector
	}

	nodes.push(root); // Otherwise, push back the root node to the nodes stack
	while (!nodes.empty())
	{
		root = nodes.top(); // Root assigned to the top element of the nodes stack
		nodes.pop();
		preorder.push_back(root->val);

		/* The root node is reassigned to the left child, once the left child is nullptr
		   the right subtree is traversed */
		if (root->right != nullptr)
		{
			nodes.push(root->right);
		}
		if (root->left != nullptr)
		{
			nodes.push(root->left);
		}
	}

	return preorder;
}

int main()
{
	TreeNode *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);

	std::vector<int> preorder = preorderTraversal(root);

	for (int i = 0; i < preorder.size(); ++i)
	{
		std::cout << preorder[i] << ", ";
	}

	return 0;
}
