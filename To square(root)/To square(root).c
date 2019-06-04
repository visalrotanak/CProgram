#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
	int* n;
	int i,a,t;
	scanf("%d",&a);
	scanf("%d",n);
	for(i=0;i<a;i++)
	{
		t = sqrt(n[i]);
		if((t*t) == n[i])
		n[i] = sqrt(n[i]);
		else n[i]=n[i]*n[i];
	}
	printf("%d",n);
}
