#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

#define maxsize 5

int tos=-1;
int stack[maxsize];


bool isFull()
{
    if(tos==maxsize-1)
    {
        return true;
    }
    return false;
}
void push(int data)
{
    if(isFull())
    {
        printf("Stack is full\n");
    }
    else
    {
        tos=tos+1;
        stack[tos]=data;
    }
}

bool isEmpty()
{
    if(tos==-1)
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
        tos=tos-1;
        
    }
}

void print()
{
    for(int i=tos; i>=0; i--)
    {
        printf("%d ", stack[i]);
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