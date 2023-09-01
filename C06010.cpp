#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int check(char c[]){
	int len=strlen(c);
	for (int i=0;i<len/2;i++){
		if (c[i]!=c[len-i-1]) return 0;
	}
	for (int i=0;i<len;i++){
		int a=0;
		a+=c[i]-'0';
		if (a%2!=0) return 0;
	}
	return 1;
}
int main (){
	int t;
	char c[505];
	scanf ("%d",&t);
	getchar();
	while (t--){
		gets(c);
		if (check(c)==1) printf ("YES\n");
		else printf ("NO\n");
	}
}