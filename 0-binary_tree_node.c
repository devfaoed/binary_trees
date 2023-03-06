#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: pointer to root node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (temp == NULL)
{
return (NULL);
}
temp->parent = parent;
temp->n = value;
temp->left = NULL;
temp->right = NULL;
return (temp);
}
