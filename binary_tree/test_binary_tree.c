#include <stdio.h>
#include "binary_tree.h"

int main()
{
    struct treenode *root = NULL;

    // Insert elements into the binary tree
    insert(&root, 50);
    insert(&root, 30);
    insert(&root, 20);
    insert(&root, 40);
    insert(&root, 70);
    insert(&root, 60);
    insert(&root, 80);

    // Perform in-order traversal
    printf("In-order traversal: ");
    inorder_traversal(root);
    printf("\n");

    // Perform pre-order traversal
    printf("Pre-order traversal: ");
    preorder_traversal(root);
    printf("\n");

    // Perform post-order traversal
    printf("Post-order traversal: ");
    postorder_traversal(root);
    printf("\n");

    // Search for an element in the binary tree
    int search_key = 40;
    struct treenode *search_result = search(root, search_key);
    if (search_result != NULL)
    {
        printf("Element %d found in the binary tree.\n", search_key);
    }
    else
    {
        printf("Element %d not found in the binary tree.\n", search_key);
    }

    // Free the memory allocated for the binary tree
    free_tree(root);

    return 0;
}
