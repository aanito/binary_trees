#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/**
 * struct queue_s - Structure for queue
 * @child: Integer stored in the node
 * @next: Pointer to the next node
 */
struct queue_s
{
	binary_tree_t *child;
	struct queue_s *next;
};
typedef struct queue_s queue_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
avl_t *array_to_avl(int *array, size_t size);

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
int greater(const binary_tree_t *tree, int n);
int check_less_greater(const binary_tree_t *tree, int n, int flag);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *avl_insert(avl_t **tree, int value);
avl_t *avl_recu(avl_t **tree, int value);
void balancer(avl_t **tree, int value);
unsigned int countNodes(const binary_tree_t *tree);
int isComplieteUtil(const binary_tree_t *tree, unsigned int index, unsigned int number_nodes);
int isHeapUtil(const binary_tree_t *tree);
int binary_tree_is_heap(const binary_tree_t *tree);
heap_t *complete_insert(binary_tree_t *tree, int value, int index, int pos);
heap_t *heap_insert(heap_t **root, int value);

bst_t *minValueNode(bst_t *root);
bst_t *bst_remove(bst_t *root, int value);

heap_t *array_to_heap(int *array, size_t size);

heap_t *max(heap_t *tree);
void recurse_extract(heap_t *tree);
int heap_extract(heap_t **root);

#endif /* _BINARY_TREES_H_ */
