#include <stdio.h>
#include <math.h>
int main(){
	int t; scanf ("%d",&t);
	while (t--){
		long long n,a;scanf ("%lld",&n);
		while (n!=0){
			a=n%10;
			if(a%2==1){
				printf ("NO\n");break;
			}
			else n/=10;
		}
		if (n==0) printf ("YES\n");
	}
}