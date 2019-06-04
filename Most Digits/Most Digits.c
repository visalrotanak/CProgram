#include <stdio.h>
#include <stddef.h>
int main()
{
	int num[20];
	int num_s;
	int a, b[20], c, i, d;
	scanf("%d",&num_s);
	for(i=0;i<num_s;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<num_s;i++)
	{
		a = num[i];
		while(a > 0)
		{
			a = a/10;
			++b[i];
		}
	}
	c = b[0];
	d = num[0];
	for(i=0;i<num_s;i++)
	{
		if(c < b[i])
			c = b[i];
	}
	for(i=0;i<num_s;i++)
	{
		if(c == b[i])
		{
			if(d > num[i])
			break;
			else if(d < num[i])
				d = num[i];
		}
	}	
	printf("%d",d);
	
	
}
