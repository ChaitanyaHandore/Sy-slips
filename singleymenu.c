#include<stdio.h>

struct node
{
	int data;
	struct node * next;

};
struct node * create();

struct node * deletefirst(struct node * head);

void main()
{
	struct node * head;
	int ch;
	
	do
	{
printf("\n1.create\n2.display\n3.deletefirst\n4.deletemiddle\n5.deletelast\n");
	 printf("\nenter your choice");
	 scanf("%d",&ch);
	 switch(ch)
	 {
   case 1:head=create();break;
   case 2:disp(head);break;
   case 3:printf("\nafter 1st node delete\n");
	head=deletefirst(head);
	break;
   case 4:deletemiddle(head);
	break;
   case 5:printf("\n after last node delete\n");
	deletelast(head);
	break;
  
	}
	}
	while(ch!=6);

	
}
struct node * create()
{
	char yn;
	struct node * head=NULL,* temp,* newn;
	
		printf("enter data for node");
		newn=malloc(sizeof(struct node));
		scanf("%d",&newn->data);
		newn->next=NULL;
		if(head==NULL)
		{
			head=newn;
			temp=newn;
		}
		else
		{
			temp->next=newn;
			temp=newn;
		}
		
	return(head);
}
disp(struct node * temp)
{
	while(temp!=NULL)
{
printf("%d=>",temp->data);
temp=temp->next;
}
}

struct node * deletefirst(struct node * head)
{
struct node * temp=head;
head=head->next;
free(temp);
return(head);
}
deletemiddle(struct node * head)
{
struct node * temp=head,*temp1;
int cnt=2,pos;
printf("enter pos to delete");
scanf("%d",&pos);
do
{
if(cnt==pos)
{
temp1=temp->next;
temp->next=temp->next->next;
free(temp1);
break;
}
cnt++;
temp=temp->next;
}
while(temp!=NULL);
}
deletelast(struct node * head)
{
struct node * temp=head,* temp1;
while(temp->next!=NULL)
{
temp1=temp;
temp=temp->next;
}
temp1->next=NULL;
free(temp);
}

