#include <stdio.h>
int main (){
	int t;
	scanf ("%d",&t);
	for (int k=0;k<t;k++){
		int n;
		scanf ("%d",&n);
		int a[n][n];
		for (int i=0;i<n;i++){
			int cnt=1;
			for (int j=0;j<n;j++){
				if (i>=j) {
					a[i][j]=cnt;
					++cnt;
				}
				else a[i][j]=0;
			}
		}
		int b[n][n];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				b[i][j]=a[j][i];
			}
		}
		int c[n][n];
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				c[i][j]=0;
				for (int h=0;h<n;h++){
					c[i][j]+=a[i][h]*b[h][j];
				}
			}
		}
		printf ("Test %d:\n",k+1);
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				printf ("%d ",c[i][j]);
			}
			printf ("\n");
		}
	}
}