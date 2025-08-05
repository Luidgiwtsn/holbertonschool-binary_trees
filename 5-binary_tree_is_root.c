#include "binary_trees.h"

/**
 * binary_tree_is_root - verifie si un noeud est la racine d'un arbre
 * @node: pointeur vers le noeud a verifier
 * return: 1 si cest la racine, sinon 0
 */

 int binary_tree_is_root(const binary_tree_t *node)
 {
    if (node == NULL)
        return (0);

    return (node->parent == NULL ? 1 : 0);
 }