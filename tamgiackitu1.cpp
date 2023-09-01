#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a=0;
	for (int i=1;i<=n;i++){
		if (i%2==1){
			for (int j=1;j<=i;j++){
				a++;
				printf ("%c ",96+a);
			}
		}
		else {
			a+=i;
			int b=a;
			for (int j=1;j<=i;j++){
				printf ("%c ",96+b);
				b--;
			}
		}
		printf ("\n");
	}
}