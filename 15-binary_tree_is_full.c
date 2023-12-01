#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If both subtrees are NULL, it's a leaf (full node) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both subtrees are not NULL, check recursively */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If only one subtree is NULL, it's not full */
	return (0);
}
