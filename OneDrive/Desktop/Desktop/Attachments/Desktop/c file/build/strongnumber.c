#include<stdio.h>
int main()
{
	int num,r,sum=0,temp,fact;
	printf("enter the value of num:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		fact=1;
		r=num%10;
		while(r>=1)
		{
			fact=fact*r;
			r--;
		}
		sum=sum+fact;
		num=num/10;
    }
		if(sum==temp)
		{
			printf("strong number");
		}
		else
		{
			printf("not strong number");
		}
	return 0;
}

