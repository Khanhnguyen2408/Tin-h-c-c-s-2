#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=2*i;j++){
			if (i%2!=0&&j%2!=0){
				printf ("%d",j);
			}
			if (i%2==0&&j%2==0){
				printf ("%d",j);
			}
		}
		printf ("\n");
	}
}