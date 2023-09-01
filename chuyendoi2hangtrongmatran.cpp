#include <stdio.h>
int main(){
	int m,n;// m là hàng n là cột 
	scanf ("%d %d",&m,&n);
	int a[m][n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			scanf ("%d",&a[i][j]);
		}
	}
	int b,c;
	scanf ("%d %d",&b,&c);
	for (int i=0;i<n;i++){
			int temp=a[b-1][i];
			a[b-1][i]=a[c-1][i];
			a[c-1][i]=temp;
		
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf ("%d ",a[i][j]);
		}
		printf ("\n");
	}
}