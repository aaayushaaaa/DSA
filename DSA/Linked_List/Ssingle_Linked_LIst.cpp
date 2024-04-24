#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
	struct node *next;
	int data;

};
	struct node *head;
	struct node *tail;
void insert(int data)--
{
	struct node *temp=(node*)malloc(sizeof(struct node));
	temp->data=data;
	
	if(tail==NULL){
		tail=temp;
	}
	else{
	temp->next=NULL;
	temp->next=temp;
	tail=temp;
	}
	
	if(head==NULL)
	{
		head=temp;
	}
}
int main()
{
	insert(5);
	insert(50);
	insert(500);
	
	struct node *temp=head;
	while(true)
{
	printf("%d","|%p", temp->data, temp->next);
	temp=temp->next;
	if(temp==NULL){
		break;
	}
}
}