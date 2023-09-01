#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int check(char c[]){
	int len=strlen(c);
	int so[10]={0};
	for (int i=0;i<len;i++){
		if (c[0]=='0'||!isdigit(c[i])) {
			return -1;
			break;
		}
		so[c[i]-'0']++;
	}

		for (int i=0;i<10;i++){
			if (so[i]==0) return 0;
			break;
		
	}
	return 1;
}
int main(){
	int t;
	scanf ("%d",&t);
	char c[1005];
	getchar();
	while (t--){
		gets(c);
	if (check(c)==-1) printf ("INVALID\n");
	if (check(c)==1) printf ("YES\n");
	if (check(c)==0) printf ("NO\n");
	}
	
}