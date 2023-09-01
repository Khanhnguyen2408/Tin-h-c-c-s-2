#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int check(char c[]){
	int len=strlen(c);
	if (c[0]!='8'||c[len-1]!='8') return 0;
	for (int i=0;i<len/2;i++){
		if (c[i]!=c[len-1-i]) return 0;
	}
	int sum=0;
	for (int i=0;i<len;i++){
		sum+=c[i]-'0';
	}
	if (sum%10!=0) return 0;
	return 1;
}
int main (){
	int t;
	scanf ("%d",&t);
	getchar();
	while (t--){
		char c[501];
		gets(c);
		if (check(c)==1) printf ("YES\n");
		else printf ("NO\n");
	}
}