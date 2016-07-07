#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,a=1;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(k=1;k<n-i;k++)
printf(" ");
for(j=0;j<=i;j++)
{
if(i==0||j==0)
a=1;
else
a=a*(i-j+1)/j;
printf("%d",a);
}
printf("\n");
}
getch();
}
