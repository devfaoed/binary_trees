#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree, otherwise 0
 * If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftHeight = 0;
size_t rightHeight = 0;

if (tree == NULL)
return (0);

if (tree->left)
{
leftHeight = 1 + binary_tree_height(tree->left);
}
else
{
leftHeight = 0;
}
if (tree->right)
{
rightHeight = 1 + binary_tree_height(tree->right);
}
else
{
rightHeight = 0;
}
return (leftHeight > rightHeight ? leftHeight : rightHeight);

}
