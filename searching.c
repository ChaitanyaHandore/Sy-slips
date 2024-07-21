#include<stdio.h>
void sequential (int a[],int n, int key);
void main()
{
int a[10],i,n,key;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element to search");
scanf("%d",&key);
sequential(a,n,key);
}
void sequential(int a[],int n,int key)
{
int i,flag=0;
for(i=0;i<n;i++)
{
if(a[i]==key)
{
flag=1;
break;
}
}
if(flag==1)
printf("element is found at %d",i);
else
printf("element is not found");
}
