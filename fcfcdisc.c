#include<stdio.h>
int main()
{
int n,diff,tst=0;
printf("Enter the no. of request\n");
scanf("%d",&n);
int req[n+1];
printf("enter the current head position\n");
scanf("%d",&req[0]);
printf("enter the request\n");
for(int i=1;i<=n;i++)
{
scanf("%d",&req[i]);
if(req[i]<req[i-1])
{
diff=req[i-1]-req[i];
}
else
{
diff=req[i]-req[i-1];
}
tst+=diff;
}
printf("total seek time is %d",tst);
return 0;
}

