#include <iostream>
#include <vector>
#include <stack>

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

std::vector<int> inorderTraversal(TreeNode* root)
{
	std::vector<int> inorder;
	std::stack<TreeNode*> stack;

	if (!root)
	{
		return inorder;
	}

	stack.push(root);
	bool right = false;

	while (!stack.empty())
	{
		TreeNode *temp = stack.top();

		if (right)
		{
			inorder.push_back(temp->val);
			stack.pop();
			if (temp->right)
			{
				stack.push(temp->right);
				right = false;
			}
		}
		else
		{
			if (temp->left)
			{
				stack.push(temp->left);
			}
			else
			{
				right = true;
			}
		}
	}

	return inorder;
}

int main()
{
	TreeNode *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);

	std::vector<int> inorder = inorderTraversal(root);

	for (int i = 0; i < inorder.size(); ++i)
	{
		std::cout << inorder[i] << ", ";
	}

	return 0;
}
