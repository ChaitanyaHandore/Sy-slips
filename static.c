#include<stdio.h>
#define max 10
int queue[max],f=-1,r=-1;
void main()
{
 int ch;

do
{
printf("\n1.enque\n2.disp");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
 case 1:enque();break;
 case 2:disp();break;
}
}
while(ch!=3);

}
enque()
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

disp()
{
int i;
for(i=r;i>=f;i--)
printf("%d",queue[i]);

}
int isfull()
{
  return(r==max-1);
}

