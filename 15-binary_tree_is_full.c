#include "binary_trees.h"

/**
 * binary_tree_is_full - verifie si un arbre binaire est plein
 * @tree: pointeur vers la racine de l'arbre
 * return: 1 si l'arbre est plein, 0 sinon ou si tree est NULL
 * 
 */

 int binary_tree_is_full(const binary_tree_t *tree)
 {
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left && tree->right)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    return (0);
        
 }