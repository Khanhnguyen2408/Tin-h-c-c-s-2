#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	return strcmp(x,y);
}
int main(){
	char c[105];
	char d[105];
	gets(c);
	gets(d);
	char a[100][100];
	char b[100][100];
	int n=0,m=0;
	char *token=strtok(c," ");
	while (token!=NULL){
		strcpy(a[n],token);
		++n;
		token=strtok(NULL," ");
	}
	token=strtok(d," ");
	while (token!=NULL){
		strcpy(b[m],token);
		++m;
		token=strtok(NULL," ");
	}
	qsort (a,n,sizeof(a[0]),cmp);
	for (int i=0;i<n;i++){
		while (strcmp(a[i],a[i+1])==0) i++;
		int ok=0;
		for (int j=0;j<m;j++){
			if(strcmp(a[i],b[j])==0){
				ok=1;
				break;
			}
		}
		if (ok==0) printf ("%s ",a[i]);
	}
}