#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++){
		int k=64+i,tmp=n-1;
		for (int j=1;j<=i;j++){
			if (j<2){
				printf ("%c ",k),k=k+tmp;
			}
			else {
				printf ("%c ",k),k=k+--tmp;
			}
		}
		printf ("\n");
	}
}