#include <stdio.h>
#include <stddef.h>
#include <math.h>
int average(int *values, size_t count);
int main()
{
	int values[] = {5,25,50,75};
	int expected;
	int received = average(values,sizeof(values)/sizeof(values[0]));
	
}
int average(int *values, size_t count)
{
	int sum = 0,i;
	int ave;
	for(i=0;i<count;i++)
	{
		sum += values[i];
	}
	ave = round(sum/count);
	printf("%d",ave);
}

//main()
//{
//	int values[] = {1,2,3,4,5};
//	printf("%d",sizeof(values)/sizeof(values[0]));
//}
