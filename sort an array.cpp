#include<stdio.h>
int main()
{
int i,j,num,temp;
scanf("%d",&num);
int a[num];
for(i=0;i<num;i++)
{
 scanf("%d",&a[i]);
}

for(i=0;i<num;i++)
{
 for(j=i+1;j<num;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
}

for(i=0;i<num;i++)
{
 printf("%d\t",a[i]);
}
}
