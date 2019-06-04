#include <stdio.h>

int main()
{
	unsigned start, end, step;
	scanf("%d %d %d",&start,&end,&step);
	fflush(stdin);
		if(start > end)
			return 0;
		else if(start < end)
		{
			do
			{
				start += step;
				end = end / step;
			}while(end > 0);
		}
		printf("%d",start);
}

//char* switchItUp(int number)
//{
//   switch(number)
// {
//   case 1: return 'One'; 
//   case 2: return 'Two'; 
//   case 3: return 'Three';
//   case 4: return 'Four'; 
//   case 5: return 'Five';
//   case 6: return 'Six';
//   case 7: return 'Seven'; 
//   case 8: return 'Eight'; 
//   case 9: return 'Nine'; 
//   case 0: return 'Zero'; 
// }
//}
