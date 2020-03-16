#include <stdlib.h>
#include <stdio.h>

#include "../header/stack.h"

struct node* topstack = NULL;

struct node* createno(){
	struct node* no;
	no = (struct node *)malloc(sizeof(int));
	if(no == NULL){
		printf("ERROR: memory allocation fail");
		return NULL;
	}
	return no;
}
void freeno(struct node** no){
	free(*no);
	*no = NULL;
	
}
void push(int value){
	struct node* no = createno();
	no->data = value;
	no->next = topstack;
	topstack = no;
	printf("push: %d\n",value);
}
void pop(){
	if(topstack!=NULL){
	struct node* aux = topstack;
	topstack = aux->next;
	aux->next = NULL;
	printf("pop: %d\n",aux->data);
	freeno(&aux);
	}

}
void clearstack(){
	while(topstack!=NULL){
		pop();
	}
	printf("stack is empty\n");
}
