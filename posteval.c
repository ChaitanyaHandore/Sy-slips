/*write a program to evaluate the postfix expression using stack*/
#include<stdio.h>
#include<math.h>
int stack[30],top=-1;
int x,i,j=0;
char postfix[30],ch;
int opd1,opd2,x;

void main()
{
	printf("\nEnter postfix:");
	scanf("%s",postfix);
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isalpha(postfix[i]))
		{
			printf("\nEnter value for %c:",postfix[i]);
			scanf("%d",&x);
			push(x);
		}
		else
		{
			switch(postfix[i])
			{
				case '+':opd1=pop();
				opd2=pop();
				x=opd2+opd1;
				push(x);break;
				case '-':opd1=pop();
				opd2=pop();
				x=opd2-opd1;
				push(x);break;
				case '*':opd1=pop();
				opd2=pop();
				x=opd2*opd1;
				push(x);break;
				case '/':opd1=pop();
				opd2=pop();
				x=opd2/opd1;
				push(x);break;
				case '^':opd1=pop();
				opd2=pop();
				x=pow(opd2,opd1);
				push(x);break;
			}
		}
	}
	printf("Result is %d\n",stack[top]);
}

push(int n)
{
	stack[++top]=n;
}

pop()
{
	return(stack[top--]);
}
