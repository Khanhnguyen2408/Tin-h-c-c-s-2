#include <stdio.h>
#include <math.h>
long long fb(long long n){
	long long fn2=0;
	long long fn1=1;
	if (n==fn2||n==fn1) return 1;
	for (int i=3;i<=93;i++){
		long long fn=fn1 +fn2;
		if (fn==n) return 1;
		fn2=fn1;
		fn1=fn;
	} 
	return 0;
}
int main (){
	int t;
	scanf ("%d",&t);
	while (t--){
		long long n;
		scanf ("%lld",&n);
		if (fb(n)==1){
			printf ("YES\n");
		}
		else printf ("NO\n");
	}
}