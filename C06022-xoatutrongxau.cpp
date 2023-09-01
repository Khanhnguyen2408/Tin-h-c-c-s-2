#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int check(char c[], char d[]){
	int n1=strlen(c);
	int n2=strlen(d);
	if (n1!=n2) return 0;
	for (int i=0;i<n1;i++){
		if (tolower(c[i])!=tolower(d[i]))
			return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf ("%d",&t);
	getchar();
	for (int i=1;i<=t;i++){
		char c[205],d[205];
		gets(c);
		scanf("%s",d);
		getchar();
		printf ("Test %d: ",i);
		char *token=strtok(c," ");
		while (token!=NULL){
			if (check(token,d)==0){
				printf ("%s ",token);
			} 
			token=strtok(NULL," ");
		}	
		printf ("\n");
	}
	
}