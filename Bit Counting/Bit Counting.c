#include <stdio.h>
#include <stddef.h>
//int main()
//{
//	unsigned int binary;
//	unsigned int integer;
//	scanf("%d",&integer);
//	if(integer > 0)
//	{
//		while(integer > 1)
//		{
//			integer /= 2;
//			if(integer%2 == 1)
//			{
//				++binary;		 	
//			}
//			else continue;
//		}
//	}
//	else return 0;
//	printf("%d", binary);
//}


//size_t main()
//{	
//	int countBits;
//	unsigned value;
//	scanf("%d",&value);
//	countBits = find(value);
//	printf("%d",countBits);
//}
//
//int find(int number)
//{
//	int n;
//	while(number > 1)
//	{
//		number /= 2;
//		if(number%2 == 1)
//			++n;
//		else continue;
//	}
//	return n;
//}

main()
{
	int num;
	int a;
	scanf("%d",&num);
	while(num > 1)
	{
		printf("%d",num%2);
		num /= 2;
		if(num%2 == 1)
		++a;
	}
	printf("\n%d",a);
}
