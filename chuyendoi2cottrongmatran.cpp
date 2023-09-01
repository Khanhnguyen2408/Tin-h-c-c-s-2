#include <stdio.h>
int main(){
	int m,n;//m là hàng n là cột
	scanf ("%d %d",&m,&n);
	int a[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf ("%d",&a[i][j]);
		}
	}
	int c,b;
	scanf ("%d %d",&b,&c);
	for (int j=0;j<m;j++){
		int temp=a[j][b-1];
		a[j][b-1]=a[j][c-1];
		a[j][c-1]=temp;
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf ("%d ",a[i][j]);
		}
		printf ("\n");
	}
}