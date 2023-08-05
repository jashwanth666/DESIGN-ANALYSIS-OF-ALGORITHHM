#include <stdio.h>
int main() 
{
int a,c=1,i,j;
printf("Enter the number of rows: ");
scanf("%d",&a);
for(i=0;i<a;i++)
{
for(j=1;j<=a-i;j++)
{
printf(" ");
}
for(j=0;j<=i;j++)
{
if(j==0)
c;
else
c=c*(i-j+1)/j;
printf("%d ",c);
}
printf("\n");
}
return 0;
}

