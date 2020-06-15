#include <iostream>
#include <stack>
#include <vector>

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
};

TreeNode* newNode(int x)
{
	TreeNode *node = new TreeNode;

	node->val = x;
	node->left = nullptr;
	node->right = nullptr;

	return node;
}

std::vector<int> preorderTraversal(TreeNode* root)
{
	std::vector<int> preorder;
	std::stack<TreeNode*> nodes;

	if (root == nullptr)
	{
		return preorder;
	}

	nodes.push(root);
	while (!nodes.empty())
	{
		root = nodes.top();
		nodes.pop();
		preorder.push_back(root->val);

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
