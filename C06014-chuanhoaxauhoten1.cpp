#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	int t;
	scanf ("%d",&t);
	getchar();
	while (t--){
		char c[85];
		gets(c);
		for (int i=0;i<strlen(c);i++){
			c[i]=tolower(c[i]);
		}
		char *token=strtok(c," ");
		while (token!=NULL){
			token[0]=toupper(token[0]);
			printf ("%s ",token);
			token=strtok(NULL," ");
		}
		printf ("\n");
	}
}