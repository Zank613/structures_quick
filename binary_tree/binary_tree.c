#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

// Create a new node with the given data
struct treenode *create_node(int data)
{
    struct treenode *new_node = malloc(sizeof(struct treenode));
    if (!new_node)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Insert a new element into the binary tree
void insert(struct treenode **root, int data)
{
    if (*root == NULL)
    {
        *root = create_node(data);
    }
    else
    {
        if (data < (*root)->data)
        {
            insert(&((*root)->left), data);
        }
        else
        {
            insert(&((*root)->right), data);
        }
    }
}

// Search for an element in the binary tree
struct treenode *search(struct treenode *root, int data)
{
    if (root == NULL || root->data == data)
    {
        return root;
    }

    if (data < root->data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}

// In-order traversal of the binary tree
void inorder_traversal(struct treenode *root)
{
    if (!root)
    {
        inorder_traversal(root->left);
        printf("%d ", root->data);
        inorder_traversal(root->right);
    }
}

// Pre-order traversal of the binary tree
void preorder_traversal(struct treenode *root)
{
    if (!root)
    {
        printf("%d ", root->data);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

// Post-order traversal of the binary tree
void postorder_traversal(struct treenode *root)
{
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%d ", root->data);
}

// Free the memory allocated for the binary tree
void free_tree(struct treenode *root)
{
    if (!root)
    {
        free_tree(root->left);
        free_tree(root->right);
        free(root);
    }
}