#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of anothe node
 * @parent: pointer to the node to insert in
 * @value: the value to store in the new node
 * Return: pointer to the created node, otherwise NULL if
 * it fail or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *temp;

if (parent == NULL)
{
return (NULL);
}

temp = malloc(sizeof(binary_tree_t));
if (temp == NULL)
{
return (NULL);
}

temp->n = value;
temp->left = NULL;
temp->right = parent->right;
temp->parent = parent;
parent->right = temp;

if (temp->right)
{
temp->right->parent = temp;
}
return (temp);
}
