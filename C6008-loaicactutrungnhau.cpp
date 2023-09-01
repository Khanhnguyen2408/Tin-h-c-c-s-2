#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	char c[105];
	char a[105][105];
	gets(c);
	int n=0;
	char *token=strtok(c," ");
	while (token!=NULL){
		strcpy(a[n],token);
		++n;
		token=strtok(NULL," ");
	}
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (strcmp(a[i],a[j])==0){
				strcpy(a[j],"");
			}
		}
	}
	for (int i=0;i<n;i++){
		printf ("%s ",a[i]);
	}
}