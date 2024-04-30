/* c program to implement queues using arrays */
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int queue[MAX];
int front=-1;
int rear=-1;
void insert();
void delete();
void display();
int main()
{
	int choice
	printf("insert element\n");
	printf("delete element\n");
	printf("display element);
	printf("exit\n");
	printf("enter your choice\n");
	scanf("%d",&item);
	switch(choice)
	{
		case 1: printf("enter the element:\n");
			scanf("%d",item);
			insert(item);
			break;
		case 2: printf("enter the element:\n');
			scanf("%d",item);
			delete();
			break;
		case 3: printf("enter the element:\n);
			scanf("%d",item);
			display();
			break;
		case 4: exit(0);
		default: ("invalid choice:\n");
	}
}
void insert(int item)
{
	if(rear=MAX-1)
		printf("queue is full");
	else
	{
		queue[++rear]=item;
		if(front==-1)
			front=0;
	}
}
void delete()
{
	if(front==-1)
		printf("queue is empty\n);
	else
	{
		printf("delete element:\n);
		if(front==rear)
			front=rear=-1;
		else
		{
			printf(







