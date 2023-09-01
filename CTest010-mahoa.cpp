#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		int a[100]={0};
		char c[105];
		scanf ("%s",c);
		for (int i=0;i<strlen(c);i++) a[c[i]]++;
		for (int i=0;i<strlen(c);i++){
			if (a[c[i]]!=0){
				printf ("%c%d",c[i],a[c[i]]);
				a[c[i]]=0;
			}
		}
		printf ("\n");
	}
}