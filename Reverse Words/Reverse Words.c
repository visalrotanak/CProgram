#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char main()
{
	char str[20];
	int len,i;
	scanf("%s",str);
	len = strlen(str);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
