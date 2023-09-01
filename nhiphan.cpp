#include <stdio.h>
void nhiphan(int n){
	if (n==0) return;
	nhiphan(n/2);
	printf ("%d",n%2);
}
int main (){
	int n;
	scanf ("%d",&n);
	if (n==0){
		printf ("0");
	}
	nhiphan(n);
}