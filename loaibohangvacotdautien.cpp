#include <stdio.h>
int main (){
	int t,i;
	scanf ("%d",&t);
	for (i=1;i<=t;i++){
		int m,n;//m là hàng n là cột 
		scanf ("%d %d",&m,&n);
		int a[m][n];
		for (int j=0;j<m;j++){
			for (int k=0;k<n;k++){
				scanf ("%d",&a[j][k]);
			}
		}
		printf ("Test %d:\n",i);
		for (int j=1;j<m;j++){
			for (int k=1;k<n;k++){
				printf ("%5d ",a[j][k]);
			}
			printf ("\n");
		}
	}
	printf ("\n");
}