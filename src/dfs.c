/*
 * Search an expression using DFS.
 */

#include <stdio.h>		/* scanf, printf */
#include <stdlib.h>		/* abort */
#include <stdbool.h>		/* bool, true, false */
#include "dfs.h"

// dont really understand this exercise

void DFT (node * root)
{
node *t=root;
if (t->lchild != NULL){
  t=t->lchild;
}
else if (t->lchild==NULL){
  if (t->rchild!=NULL){
    t=t->rchild;
  }
}
else if (t->lchild==NULL && t->lchild==NULL){

}

}

node *make_node (int num, node * left, node * right)
{
	struct node* make_node=(struct node*)
    malloc(sizeof(struct node));
    {
    int num = num;
    bool visited = true;
    struct node *lchild;
    struct node *rchild;
    }
}

void free_node (node * p)
{
	free (p);
}


void print_node (node * p)
{

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("%d", p->num);
}


void print_tree (node * p, int depth)
{
  for (int i = 0; i < depth; i = i + 1)
    printf (" ");
  printf ("| ");

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("[%d]\n", p->num);


  if (p->lchild)
    {
      print_tree (p->lchild, depth + 1);
    }

  if (p->rchild)
    print_tree (p->rchild, depth + 1);
}

stack *push (stack * topp, node * node)
{
stack *topp = malloc(sizeof(stack));

if (topp==NULL){
  topp->node=node;
  topp->next=NULL;
}
else {
  topp->next=topp;
  topp->node=node;
}

}

bool isEmpty (stack * topp)
{
  if (topp->node==NULL)
  {
  return true;
  }
  
  return false;
}

node *top (stack * topp)
{
	return 0;
}

// Utility function to pop topp  
// element from the stack 

stack *pop (stack * topp)
{
	return 0;
}

void print_stack (stack * topp)
{
  struct stack *temp = topp;

  while (temp != NULL)
    {

      print_node (temp->node);
      printf ("\n");

      temp = temp->next;
    }

  printf ("====\n");

  return;
}
