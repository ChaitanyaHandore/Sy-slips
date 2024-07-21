#include<stdio.h>
void bubble(int a[],int n);
void main()
{ 
 int i,n,a[10];
printf("enter n");
scanf("%d",&n);
 for(i=0;i<n;i++)
scanf("%d",&a[i]);
 bubble (a,n);
printf("\nsorted array ");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
    void bubble(int a[],int n)
{
   int i,j,temp,count=0;
 for(i=1;i<n;i++)
  {
     for(j=0;j<n-1;j++)
  { 
     if(a[j]>a[j+1])
     {
count++;
  temp=a[j];
             a[j]=a[j+1];
            a[j+1]=temp;
   }

}
}
printf("%d", count);
}
