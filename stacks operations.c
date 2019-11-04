#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max],top=-1,choice,item,i;
void push()
{

	if(top>=max-1)
	{
		printf("overflow\n");
	}
	else
	{
		printf("enter item to be pushed:");
		scanf("%d",&item);
		top++;
		stack[top]=item;
	}
}
void pop()
{
	if(top<=-1)
	printf("underflow");
	else
	{
		printf("the popped item is %d\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("the elements in stack are\n");
		for(int i=top;i>=0;i--)
		{
		printf("%d\n",stack[i]);}
		printf("press next choice\n");	
	}
	else
	{
		printf("the stack is empty\n");
	}
}

int main()
{
    printf("operations in stack\n");
    printf("1.push\n2.pop\n3.display\n4.Exit\n");
    do
{	
    printf("enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:
    	{
    		push();
    		break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			exit(0);
			break;
		}
		default:
		{
			printf("\nenter the correct choice\n");
		}
   }
   }
   while(choice!=4); 	
   return 0;
}
