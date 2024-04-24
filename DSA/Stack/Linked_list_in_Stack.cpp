#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *tos;
 struct node *temp;

void push(int data)
{
    struct node *next =(struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = tos;
    tos = temp;
}

bool isEmpty()
{
    if(tos==NULL)
    {
        return true;
    }
    return false;
}
    
void pop()
{
    if(isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        tos=tos->next;
        
    }
}

void print()
{
struct node *temp2=tos;
while(temp!=NULL)
{
	printf("%d",temp->data);
	tos=tos->next;
}
}

int main()
{
push(10);
push(20);
push(30);
push(40);
push(50);   
print();
printf("\nAfter deleting:\n");
pop();
pop();
pop();
print();
}