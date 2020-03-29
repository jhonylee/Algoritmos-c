#include<stdio.h>
#include<stdlib.h>
#include"../header/stack.h"

int main(){
	struct node* topstack = NULL;
	
	push(&topstack,5);
	push(&topstack,6);
	push(&topstack,1);
	push(&topstack,6);
	printstack(&topstack);
	pop(&topstack);
	printstack(&topstack);
	push(&topstack,0);
	push(&topstack,3);
	pop(&topstack);
	push(&topstack,4);
	push(&topstack,7);
	
	printstack(&topstack);

	clearstack(&topstack);

	printstack(&topstack);

}
