#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int m=n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<m;j++){
			printf ("~");	
		}
		m--;
		for (int k=1;k<2*i;k+=2){
			printf ("%d",k);
		}
		for (int l=2*i-3;l>0;l-=2){
			printf ("%d",l);
		}
		printf ("\n");
	}
}