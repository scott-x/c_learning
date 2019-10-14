/*
* @Author: scottxiong
* @Date:   2019-10-14 14:31:31
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-14 19:39:26
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int val;
  struct node * left;
  struct node * right;
} node_t;

void insert(node_t * tree,int val);
void print_tree(node_t * current);
void printDFS(node_t * current);
void printBFS(node_t * current);

int main()
{
  node_t * test_list = malloc(sizeof(node_t));
  /* set values explicitly, alternative would be calloc() */
  test_list->val = 0;
  test_list->left = NULL;
  test_list->right = NULL;

  insert(test_list,9);
  insert(test_list,7);
  insert(test_list,5);
  insert(test_list,8);
  insert(test_list,4);
  insert(test_list,12);
  insert(test_list,11);
  insert(test_list,6);
  printf("深度优先:\n");
  printDFS(test_list);
  printf("\n");
  printf("广度优先:\n");
  printBFS(test_list);
  printf("\n");
}

void insert(node_t * tree, int val)
{
  if (tree->val == 0)
  {
    /* insert on current (empty) position */
    tree->val=val;
  }
  else
  {
    if (val < tree->val)
    {
      /* insert left */
      if (tree->left != NULL)
      {
        insert(tree->left, val);
      }
      else
      {
        tree->left = malloc(sizeof(node_t));
        /* set values explicitly, alternative would be calloc() */
        tree->left->val = val;
        tree->left->left = NULL;
        tree->left->right = NULL;
      }
    }
    else
    {
      if (val >= tree->val)
      {
        /* insert right */
        if (tree->right != NULL)
        {
          insert(tree->right,val);
        }
        else
        {
          tree->right=malloc(sizeof(node_t));
          /* set values explicitly, alternative would be calloc() */
          tree->right->val=val;
          tree->right->left = NULL;
          tree->right->right = NULL;
        }
      }
    }
  }
}

/* depth-first search */
void printDFS(node_t * current)
{
  /* change the code here */
  if (current == NULL)         return;   /* security measure */
  if (current->left != NULL)   printDFS(current->left);
  if (current != NULL)         printf("%d ", current->val);
  if (current->right != NULL)  printDFS(current->right);
}

void printBFS(node_t * current){
  if (current == NULL){
    return;
  }else{
    printf("%d ", current->val);
    if (current->left != NULL) {
      printBFS(current->left);
    }
    if (current->right != NULL){
      printBFS(current->right);
    }
  }

}


/*
深度优先:
4 5 6 7 8 9 11 12 
广度优先:
9 7 5 4 6 8 12 11 
*/