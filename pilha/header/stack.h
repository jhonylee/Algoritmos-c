#ifndef PILHA_H
#define PILHA_H
struct node{
	int data;
	struct node *next;
};
struct node* createno();
void freeno(struct node** no);
void push(struct node** topstack,int value);
void pop(struct node** topstack);
void clearstack(struct node** topstack);
int printstack(struct node** topstack);
#endif
