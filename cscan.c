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
int sl;
int prediff=s;
for(int i=1;i<=n;i++)
{
if(req[i]<req[0])
{
diff=req[0]-req[i];
if(diff<prediff)
{
sl=req[i];
prediff=diff;
}
}
}
tst=((s-1)-req[0])+(s-1)+sl;
printf("total seek time is %d",tst);
return 0;
}

