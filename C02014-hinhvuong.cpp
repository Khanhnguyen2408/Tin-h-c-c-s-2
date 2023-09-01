#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int k=n;
	int a[2*n-1][2*n-1];
	int m=0;
	while (m<k){
		for (int i=1+m;i<=2*k-1-m;i++){
			for (int j=1+m;j<=2*k-1-m;j++){
				if (j==1+m||j==2*k-1-m||i==1+m||i==2*k-1-m){
					a[i][j]=n;
				}
			}
		}
		m++;
		n--;
	}
	for (int i=1;i<=2*k-1;i++){
		for (int j=1;j<=2*k-1;j++){
			printf ("%d",a[i][j]);
		}
		printf ("\n");
	}
}