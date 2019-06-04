#include <stdio.h>
int main()
{
	unsigned int divisor;
	unsigned int bound;
	unsigned int result;
	scanf("%d %d",&divisor,&bound);
	
	if(divisor > bound)
	 return 0;
	else if( divisor < bound )
	{
		while(bound != 0)
		{
			result = bound % divisor;
			if(result == 0)
			 break;
			bound -= 1;
		}
	}
	printf("%d",bound);
}
