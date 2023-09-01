#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int check(char c[]){
	int l=0;
	int r=strlen(c)-1;
	int cnt =0;
	while (l<r){
		if (c[l]!=c[r]) ++cnt;
		++l;
		--r;
	}
	if (strlen(c)%2==1&&cnt<=1) return 1;
	if (strlen(c)%2==0&&cnt==1) return 1;
	else return 0;
}
int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		char c[25];
		scanf ("%s",c);
		if (check(c)==1) printf ("YES\n");
		else printf ("NO\n");
	}
}