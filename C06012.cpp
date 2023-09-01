#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int nt(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int check(char c[]){
	int len=strlen(c);
	for (int i=1;i<len/2;i++){
		if (c[i]!=c[len-1-i]) return 0;
	}
	for (int i=1;i<len;i++){
		int a=0;
		a+=c[i]-'0';
		if(nt(a)==0) return 0;
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