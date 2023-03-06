#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node to find sibling
 * Return: pointer to sibling node
 * if node is NULL or parent is NULL, return NULL
 * if node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

if (node == node->parent->left)
return (node->parent->right);

return (node->parent->left);
}
