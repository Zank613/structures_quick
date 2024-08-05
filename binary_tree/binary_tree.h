#ifndef BINARY_TREE_H
#define BINARY_TREE_H

struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;
};

struct treenode *create_node(int data);
void insert(struct treenode **root, int data);
struct treenode *search(struct treenode *root, int data);
void inorder_traversal(struct treenode *root);
void preorder_traversal(struct treenode *root);
void postorder_traversal(struct treenode *root);
void free_tree(struct treenode *root);

#endif // BINARY_TREE_H