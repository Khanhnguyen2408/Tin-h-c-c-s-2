#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int k=0;
	for (int i=1;i<=n;i++){
		if (i%2==1){	
			for (int j=1;j<=i;j++){
				k++;
				printf ("%d ",k);
			}
		}
		else {
			k+=i;
			int b=k;
			for (int j=1;j<=i;j++){
				printf ("%d ",b);
				b--;
			}
		}
		printf ("\n");
		}
}