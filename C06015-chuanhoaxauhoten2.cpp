#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	int t;
	scanf ("%d",&t);
	getchar();
	while (t--){
		char c[55];
		char a[55][55];
		int n=0;
		gets(c);
		for (int i=0;i<strlen(c);i++){
			c[i]=tolower(c[i]);
		}
		char *token=strtok(c," ");
		while (token!=NULL){
			strcpy(a[n],token);
			++n;
			token=strtok(NULL," ");
		}
		for (int i=1;i<n;i++){
			a[i][0]=toupper(a[i][0]);
		}
		for (int i=0;i<50;i++){
			a[0][i]=toupper(a[0][i]);
		}
		for (int i=1;i<n;i++){
			printf ("%s",a[i]);
			if (i!=n-1){
				printf (" ");
			}
		}
		printf (", %s",a[0]);
		printf ("\n");
	}
}