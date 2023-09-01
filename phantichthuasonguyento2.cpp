#include <stdio.h>
#include <math.h>
void pt(int n){
	for (int i = 2;i<=n;i++){
			while (n%i==0){
				printf ("%d",i);
				n/=i;
				if (n!=1) printf ("x");
			}
		}
	
	if (n>1) printf ("%d",n);
}
int main (){
	int n; scanf ("%d",&n);
	pt(n);
	return 0;
}