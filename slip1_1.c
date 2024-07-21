#include<stdio.h>
#include<stdlib.h>
struct dlist
{
        int data;
        struct dlist *next,*prev;
};
struct dlist *create();
void main()
{
        int ch;
        struct dlist *head;
        do
        {
        printf("\n1.create\n2.disp\n3.exit");
        printf("enter choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:head=create(head);
        break;
        case 2:disp(head);
        break;
        }
        }while(ch!=3);
}
struct dlist *create()
{
        int z;
        struct dlist *head=NULL,*temp,*newn;
        do
{
        printf("enter the data");
        newn=malloc(sizeof(struct dlist));
        scanf("%d",&newn->data);
        newn->next=NULL;
        newn->prev=NULL;
        if(head==NULL)
{
        head=newn;
        temp=newn;
}
        else
{
        temp->next=newn;
        newn->prev=temp;
         temp=newn;
}
        printf("want to insert node");
        fflush(stdin);
        scanf("%d",&z);
}
        while(z!=0);
        return(head);
}
disp(struct dlist *temp)
{
        while(temp!=NULL)
        {
        printf("%d=>",temp->data);
        temp=temp->next;
        }
}


