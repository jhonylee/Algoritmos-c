#ifndef PILHA_H
#define PILHA_H
struct node{
	int data;
	struct node *next;
};
struct node* createno();
void freeno(struct node** no);
void top();
void push(int value);
void pop();
void clearstack();

#endif
