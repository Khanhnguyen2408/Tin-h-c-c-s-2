#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char c[999];
	scanf ("%s",c);
	getchar();
	int dem1=0,dem2=0,dem3=0;
	for (int i=0;i<strlen(c);i++){
		if (c[i]=='(') dem1+=1;
		else if (c[i]==')') dem1-=1;
		else if (c[i]=='[') dem2+=1;
		else if (c[i]==']') dem2-=1;
		else if (c[i]='{') dem3+=1;
		else if (c[i]='}') dem3-=1;
	}
	if (dem1==0&&dem2==0&&dem3==0) printf ("1");
	else printf ("0");
}