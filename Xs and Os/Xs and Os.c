#include <stdio.h>
#include <string.h>
main()
{
	char str[10];
	char ch;
	int l;
	int i;
	int a = 0,b = 0;
	scanf("%s",str);
	l = strlen(str); 
	for(i=0;i<l;i++)
	{
		ch = str[i];
			switch(ch)
			{
				case 'x':
				case 'X':
					a++;
				break;
				case 'O':
				case 'o':
					b++;
				break;
			}
	
	}
	if(a == b)
		printf("TRUE");
	else 
		printf("FALSE");
}
