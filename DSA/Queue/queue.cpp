#include<stdio.h>
#include<stdbool.h>
#define maxsize 5

int queue[maxsize];
int front= -1;
int rear= -1;

void enqueue(int data)
{
	if(rear==maxsize-1)
	{
		printf("Queue is full");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
	}
	else
	{
	rear=rear+1;
	queue[rear]=data;
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");	
	}
	else if(front==rear)
	{
		front=rear-1;
	}
	else
	{
		front=front+1;
	}
}
 void print()
 {
 	for(int i=front; i<=rear; i++)
 	{
 		printf(" %d ", queue[i]);
	}
 }
 
 int main()
 {
 	enqueue(10);
 	enqueue(20);
 	enqueue(30);
 	enqueue(40);
 	print();
 	printf("\nAfter deleting:....");
 	dequeue();
 }