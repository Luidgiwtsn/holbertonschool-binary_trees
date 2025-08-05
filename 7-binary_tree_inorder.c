#include "binary_trees.h"

/**
 * binary_tree_inorder -parcour un arbre en ordere infixe (in-order)
 * @tree: pointeur vers la racine de l'arbre
 * @func: pointeur vers la pointeur fonction à appeler pour chaque de noeud
 */

 void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
 {
    if (tree == NULL || func == NULL)
    return;

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
 }