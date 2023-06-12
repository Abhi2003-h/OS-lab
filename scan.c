#include<stdio.h>
int main()
{
int i,flag=0;
int n,s,diff,tst=0;
printf("Enter the size of memory\n");
scanf("%d",&s);
printf("Enter the no. of request\n");
scanf("%d",&n);
int req[n+1];
printf("enter the current head position\n");
scanf("%d",&req[0]);
printf("enter the request\n");
for(int i=1;i<=n;i++)
{
scanf("%d",&req[i]);
}
int small=req[i];
for(int i=2;i<=n;i++)
{
if(small>req[i])
{
small=req[i];
}
}
tst=((s-1)-req[0])+((s-1)-small);
printf("total seek time is %d",tst);
return 0;
}

