/*To Develop a program to Perform queue operations using array*/
#include<stdio.h>
#include<stdlib.h>
#define n 5

int rear=-1;
int front=-1;
int queue[n];

int isfull()
{
	if(rear==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void enqueue(int val)
{	
	if(isfull())
	{
		printf("\n Overflow");
	}
	
	else
	{
		if(front==-1)
		{
			front=0;
			
		}
		rear++;
		queue[rear]=val;
	}
}

void dequeue()
{
	if(isempty())
	{
		printf("\n Queue Empty");
	}
	
	else
	{
		front++;
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}

void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
}

void main()
{
	while(1)
	{
		int option, entry;
		printf("\n\n MENU \n 1: ENQUEUE \n 2: DEQUEUE \n 3: DISPLAY \n 4: EXIT \n\n ENTER YOUR CHOICE :");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
			{
				printf("ENTER ELEMENT :");
				scanf("%d",&entry);
				enqueue(entry);
				break;
			}
			
			case 2:
			{
				dequeue();
				break;
			}
			
			case 3:
			{
				display();
				break;
			}
			
			case 4:
			{
				printf("\n Exiting \n");
				exit(0);
			}
			
			default:
			{
				printf("\n WRONG OPTION!!! \n");
			}
		}
	}
}
			
			


























			
