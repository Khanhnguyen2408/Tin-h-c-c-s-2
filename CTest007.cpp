#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int check(char c[]){
	int len=strlen(c);
	for (int i=1;i<len;i++){
		if (c[i]!='1'&&c[i]!='2'&&c[i]!='0') return 0;
	}
	return 1;
}
	
int main (){
	int t;
	char c[20];
	scanf ("%d",&t);
	getchar();
	while (t--){
		gets(c);
		if (check(c)==1) printf ("YES\n");
		else printf ("NO\n");
	}
}