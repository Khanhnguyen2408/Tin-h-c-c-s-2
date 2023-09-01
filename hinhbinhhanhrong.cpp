#include <stdio.h>
#include <math.h>
int main (){
	int n,k; scanf ("%d",&n);k=n-1;
	for (int i = 1; i<=n; i++){
		for ( int j=1; j<=k; j++){
			printf ("~");
		}
		for ( int l=1; l<=n; l++){
			if (i==1||i==n||l==1||l==n)printf ("*");
			else printf (".");
			}printf ("\n");
			k--;
	}}             
