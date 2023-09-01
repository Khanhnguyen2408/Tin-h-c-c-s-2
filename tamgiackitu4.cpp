#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++){
		int k=63+1;
		for (int j=1;j<=i;j++){
			printf ("%c",k);
			k+=2;
		}
		for (int j=2*i-3;j>=1;j-=2){
			printf ("%c",63+j);
		}
	printf ("\n");
	}
}