#include "binary_trees.h"
/**
 * binary_tree_sibling - trouve le frere d'un noeud
 * @node: pointeur vers le noeud a analyser
 * return: pointeur vers le noeud frere, ou si NULL si aucun frere ou si node/parent
 * 
 */

 binary_tree_t *binary_tree_sibling(binary_tree_t *node)
 {
    if (node == NULL || node ->parent == NULL)
        return (NULL);

    if (node == node->parent->left)
        return (node->parent->right);

    return (node->parent->right);
 }