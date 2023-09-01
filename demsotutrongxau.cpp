#include <stdio.h>
#include <string.h>
int main (){
	int t;
	scanf ("%d",&t);
	getchar();
	while (t--){
		int dem=1;
		char a[201];
		gets(a);
		for (int i=0;i<strlen(a)-1;i++){
			if (a[i]==' '&&a[i+1]!=' ') dem++;
		}
		printf ("%d\n",dem);
	}
	return 0;
}