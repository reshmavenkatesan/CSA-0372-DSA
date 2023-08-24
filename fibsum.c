#include <stdio.h>
int main()
{
	int i,j,rows,columns,a[10][10],sum;
printf("\n enter number of rows and columns : ");
scanf("%d %d", &i,&j);
printf("\n  enter the matrix elements\n");
for(rows=0;rows<i;rows++)
{
	for(columns=0;columns<j;columns++)
{
	scanf("%d", &a[rows][columns]);
}
}
for(rows=0; rows<i ; rows++)
{
	sum =0;
	for(columns=0;columns<j;columns++)
	{
		sum = sum + a[rows][columns];
	}
printf("\n the sum of elements of a rows in a matrix = %d",sum);
}
for(rows=0;rows<i;rows++)
{
	sum=0;
	for(columns=0;columns<j;columns++)
	{
		sum=sum+a[columns][rows];
	}
printf("\n the sum of elements of a columns in a matrix=%d",sum);
}
return 0;
}