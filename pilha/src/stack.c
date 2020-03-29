#include <stdlib.h>
#include <stdio.h>

#include "../header/stack.h"

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
void push(struct node** topstack,int value){
	struct node* no = createno();
	if(no != NULL){
		no->data = value;
		no->next = *topstack;
		*topstack = no;
	}
}
void pop(struct node** topstack){
	if(*topstack!=NULL){
	struct node* aux = *topstack;
	*topstack = aux->next;
	aux->next = NULL;
	freeno(&aux);
	aux = NULL;
	
	}

}
int printstack(struct node** topstack){
	struct node* aux = *topstack;
	if(*topstack == NULL){
		printf("Stack is empty\n");
		return 0;
	}	
	while (aux != NULL)
	{
		printf("%d -> ",aux->data);
		aux = aux->next;
	}
	printf("END\n");
}
void clearstack(struct node** topstack){
	while(*topstack!=NULL){
		pop(topstack);
	}
	printf("stack is empty now\n");
}
