#include <stdio.h>
#include <malloc.h>
#define MAX 10

int stack[MAX], top = -1;

void push(int stack[], int val);

int peek(int stack[]);

void display(int stack[]);

void pop(int stack[]);

int main()
{
	int val,choice;
	do {
		printf("\n 1. PUSH");
		printf("\n 2. PEEK");
		printf("\n 3. POP");
		printf("\n 4. DISPLAY");
		printf("\n 5. EXIT");
		printf("\n Enter your option : ");
		scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("\n Enter the number to be pushed on stack : ");
			scanf("%d",&val);
			push(stack, val);
			break;
		case 2:
			val = peek(stack);
			if(val != -1)
				printf("\n The value stored at top of stack is %d", val);
			break;
		case 3:
			pop(stack);
			break;
		case 4:
			display(stack);
			break;
	}
	} while(choice != 5);
	return 0;
}

void push(int stack[], int val)
{
	if(top == MAX-1)
	{
		printf("\n STACK OVERFLOW");
	}
	else 
	{
		top++;
		stack[top] = val;
	}
}

int peek(int stack[])
{
	if(top == -1)
	{
	printf("\n STACK IS EMPTY");
	return -1;
	}
	else
	return (stack[top]);
}
	
void display(int stack[])
{
	int i;
	if(top == -1)
	printf("\n STACK IS EMPTY");
	else 
	{
	for(i = top;i >= 0;i--)
	printf("\n%d",stack[i]);
	}	
}

void pop(int stack[])
{
	if(top == -1)
	{
		printf("\n LISTA VAZIA");
	}
	else
	{
		top--;	
	}
}











