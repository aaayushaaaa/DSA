#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

#define maxsize 5

int tos=-1;
int stack[maxsize];


bool isEmpty()
{
    if(tos==-1)
    {
        return true;
    }
    return false;
}

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
        printf("Stack is full");
    }
    else
    {
        tos++;
        stack[tos] = data;
    }
}

void pop(int data)
{
    if(isEmpty)
    {
        printf("Stack is empty");
    }
    else
    {
        tos--;
    }
}