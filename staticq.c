#include<stdio.h>
#define max 10
int queue[max],f=-1,r=-1;
void main()
{
 int ch;
 
do
{
printf("\n1.insert\n2.delete\n3.disp\n4.exit");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
 case 1:insert();break;
 case 2:delete1();break;
 case 3:disp();break;
}
}
while(ch!=4);

}
insert()
{
int x;
printf("\n enter value to insert:");
scanf("%d",&x);
if(isfull())
printf("\n queue is full");
else
if(f==-1&&r==-1)
{
f++;
r++;
queue[r]=x;
}
else
{r++;
queue[r]=x;
}
}
delete1()
{
if(isempty())
printf("\n queue is empty:");

else
if(f==r)
{
printf("\n delete element %d",queue[f]);
f=-1;
r=-1;
}
else
{
printf("\n delete element %d",queue[f]);
f++;
}
}
disp()
{
int i;
for(i=f;i<=r;i++)
printf("%d",queue[i]);

}
int isfull()
{
  return(r==max-1);
}
int isempty()
{
   if(f==-1 && r==-1)
      return(1);
   else return(0);
}
