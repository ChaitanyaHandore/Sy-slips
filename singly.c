#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};
struct node *create();
void main()
{
  struct node *head;
  int ch;
 
  do
   {
  printf("\n1.create\n2.disp");
  printf("Enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
 case 1: head=create();break;
 case 2:  disp(head);break;

    }
}while(ch!=3);
 

}
struct node *create()
{
  struct node *newn,*temp,*head=NULL;
  int z;
  do
  {
  printf("Enter data for node");
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
  printf("Want to continue Press 1 to yes 0 to no ");
fflush(stdin);
  scanf("%d",&z);
  }while(z!=0);
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
