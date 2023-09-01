#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
	char c[1000];
	gets(c);
	int dem1=0,dem2=0,dem3=0;
	for (int i=0;i<strlen(c);i++){
		if (isalpha(c[i])) dem1++;
		else if (isdigit(c[i])) dem2++;
		else dem3++;
	}
	printf ("%d %d %d",dem1,dem2,dem3);
}