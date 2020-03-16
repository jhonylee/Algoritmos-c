#include<stdio.h>
#include<stdlib.h>
#include"../header/stack.h"

int main(){
	push(3);
	push(4);
	pop();
	push(10);
	push(11);
	push(27);
	pop();
	push(5);
	clearstack();
}
