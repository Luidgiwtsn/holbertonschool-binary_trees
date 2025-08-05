#include "binary_trees.h"
/**
 * binary_tree_node - compte les noeuds avec moins 1 enfant
 *@tree: pointeur vers la la racine de l'arbre
 *return: le nombre de noeuds ayant au moins un enfant ou 0 si tree est NULL
 */

 size_t binary_tree_nodes(const binary_tree_t *tree)
 {

    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (0);

    return (1+ binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

 }
