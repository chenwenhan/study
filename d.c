#include <stdio.h>

int main()
{
	char  a,s;
	scanf("%c",&a);
	while(getchar()!='\n');//chi diao hou mian suo youde bapliu diyige
	scanf("%c",&s);
	while(getchar()!='\n');
	putchar(a);
	putchar(s);
	return 0;
}
