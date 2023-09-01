#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char c[105],w[105];
	gets(c);
	scanf ("%s",w);
	char *token=strtok(c," ");
	while (token!=NULL){
		if(strcmp(token,w)!=0){
			printf ("%s ",token);
		}
		token=strtok(NULL," ");
	}
}