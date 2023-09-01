#include <stdio.h>
int pascal(int k, int n){
	if (k==0||k==n){
		return 1;
	}
	else {
		return pascal(k-1,n-1)+pascal(k,n-1);
	}
}
int main (){
	int m;
	scanf ("%d",&m);
	int n,k;
	for (n=0;n<m;n++){
		for (k=0;k<=n;k++){
			printf ("%d ",pascal(k,n));
		}
		printf ("\n");
	}
	return 0;
}