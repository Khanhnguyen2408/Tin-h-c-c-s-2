#include <stdio.h>
#include <math.h>
int main (){
	int n,k,m; scanf ("%d",&n);m=n;
	for (int i=1; i<=n; i++){m--;
		for (int k=1; k<= m;k++){
			printf ("~");
		}
		 for(int j = 1; j <= i; j++){
		  printf("*");}
		printf ("\n");}
	
}