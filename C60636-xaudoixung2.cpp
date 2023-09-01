#include <stdio.h>
#include <string.h>
int main (){
	char c[1000000];
	gets(c);
	printf ("%lld",strlen(c)-1);
	return 0;
}