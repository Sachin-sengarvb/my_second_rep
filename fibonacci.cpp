#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,n;
	printf("Enter a no for fibonacci series : ");
	scanf("%d",&n);
	while(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
		n--;
	}
}
