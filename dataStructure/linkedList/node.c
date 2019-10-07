/*
* @Author: scottxiong
* @Date:   2019-10-07 22:05:48
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-10-07 23:01:37
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  	int value;
  	struct node *next;
}node_t;

//loop linked list
void printNodes(node_t *head){
    node_t * current = head;
    while(current!=NULL){
    	printf("%d\n",current->value);
    	current = current->next;
    }
}

//Adding an item to the end of the list
void push(node_t *head,int val){
     node_t * current = head;
     while(current->next!=NULL){
          current=current->next;
     }
     current->next = malloc(sizeof(node_t));
     current->next->value = val;
     current->next->next = NULL;
}

//Adding an item to the beginning of the list (pushing to the list)
void unshift(node_t **head, int val){
	  node_t * new_node;
    new_node = malloc(sizeof(node_t));

    new_node->value = val;
    new_node->next = *head;
    *head = new_node;
}


int main(int argc, char const *argv[])
{
  	node_t *head = NULL;
  	head = malloc(sizeof(node_t));
  	if (head == NULL) {
  		return 1;
  	}
  	head->value =1;
  	head->next = malloc(sizeof(node_t));
  	head->next->value = 2;
  	head->next->next = NULL;
  	printf("pushed before:\n");
  	printNodes(head);
    printf("after push:\n");
    push(head,3);
    printNodes(head);
    printf("after unshift:\n");
    unshift(&head,4);
    printNodes(head);
	return 0;
}

/*
pushed before:
1
2
after push:
1
2
3
after unshift:
4
1
2
3
*/
