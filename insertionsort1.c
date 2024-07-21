#include<stdio.h>
void insertion(int a[],int n);
void main()
{
int n,i,a[10];
printf("Enter size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insertion(a,n);
printf("Sorted array is \n");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
void insertion(int a[],int n)
{
int next,ne,j;
for(next=0;next<n;next++)
{
ne=a[next];
for(j=next-1;j>=0;j--)
{
if(a[j]>ne)
{
a[j+1]=a[j];
}
else
break;
}
a[j+1]=ne;
}
}

