#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*q,*p,*head=NULL;
struct node newnode(int val)
{
	struct node node=malloc(sizeof(struct node*));
	node->data=val;
	node->next=NULL;
	return node;
}
void insertatbeg(int n)
{
	q->data=n;
	if(head==NULL)
		q->next=NULL;
	else
	q->next=head;
}
int main()
{
	struct node *root=newnode(1);
	root->next=newnode(2);
	root->next->next=newnode(3);
	root->next->next->next=newnode(7);
	q=root;
	while(q!=NULL)
	{
		printf("%d",q->data);
		q=q->next;
	}
	insertatbeg(5);
	insertatbeg(10);
	printf("\n");
	q=root;
	while(q!=NULL)
	{
		printf("%d",q->data);
		q=q->next;
	}
	return 0;
}
