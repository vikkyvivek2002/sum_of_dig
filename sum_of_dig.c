#include<stdio.h>
int main()
{
	int num , rem,temp,sum =0;
	printf("enter a number :");
	scanf("%d",&num);
	temp = num;
	while(num != 0)
	{
		rem = num%10;
		sum = sum +rem;
		num = num/10;
	}
	printf("%d",sum );
	return 0;
}