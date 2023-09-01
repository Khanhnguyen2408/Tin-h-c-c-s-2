#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++){
		int cnt=1;
		for (int j=0;j<n;j++){
			if (j<=i) printf (" 0 ");
			else printf (" %d ",cnt++); 
		}
		printf ("\n");
	}
}