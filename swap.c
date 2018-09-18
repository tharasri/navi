#include<stdio.h>
long int rev(long int n)
	
{
	if(n<=9)
		return 0;
	return 1+rev(n/10);
}
int main()
{
	printf("%ld\n", rev(0));
}


