#include<stdio.h>
int j,temp;
void main()
{
int a[10],n,i;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("sorted array \n");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
quicksort(int a[],int lb,int ub)
{
  if(lb<=ub)
{
   j=partition(a,lb,ub);
   quicksort(a,lb,j-1);
    quicksort(a,j+1,ub);
    }
}
partition(int a[],int lb,int ub)
{
 int down=lb,up=ub,pivot;
pivot=a[down];
while(down<up)
{
  while(a[down]<=pivot && down<up)
  down++;
  while(a[up]>pivot)
up--;
if(down<up)
{
 temp=a[down];
 a[down]=a[up];
  a[up]=temp;
}
}
a[lb]=a[up];
 a[up]=pivot;
  j=up;
 return(j);
}
