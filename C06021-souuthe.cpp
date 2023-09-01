#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int check(char c[]){
	int chan=0;
	int le=0;
	for (int i=0;i<strlen(c);i++){
		if (c[0]=='0'||!isdigit(c[i])) {
			return 2;
			break;
		}
	}
	for (int i=0;i<strlen(c);i++){
		if (c[i]%2==0) chan++;
		if (c[i]%2!=0) le++;
	}
	if (strlen(c)%2==0&&chan>le) return 1;
	else if (strlen(c)%2!=0&&le<chan) return 1;
	else return 0;
}
int main(){
	int t;
	scanf ("%d",&t);
	getchar();
	while (t--){
		char c[1005];
		gets(c);
		if (check(c)==2) printf ("INVALID\n");
		if (check(c)==1) printf ("YES\n");
		if (check(c)==0) printf ("NO\n");
	}
}