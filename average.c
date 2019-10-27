#include<stdio.h>
int main()
{
	int n=0;
	int sum=0;
	float average;
	scanf("%d\n",&n);
	int a[n],i;
	for(i=0;i<n;i=i+1)
	{
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	average=sum/n;
	printf("%.2f",average);
	return 0;
 } 
