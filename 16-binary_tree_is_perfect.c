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


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 for perfect tree, oyherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_perfect, right_perfect = 0;
size_t left_depth, right_depth = 0;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left && tree->right)
{
left_perfect = binary_tree_is_perfect(tree->left);
right_perfect = binary_tree_is_perfect(tree->right);
left_depth = binary_tree_height(tree->left);
right_depth = binary_tree_height(tree->right);

return (left_perfect && right_perfect && (left_depth == right_depth));
}

return (0);
}
