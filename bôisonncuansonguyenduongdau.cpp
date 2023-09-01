#include <stdio.h>
#include <math.h>
long long ucln(long long a, long long b ){
	if (b==0) return a;
	else return ucln(b,a%b);
long long bcnn(long long a, long long b){
	return a*b/ucln(a,b);
}
int main (){
	int t;
	scanf ("%d",&t);
	while (t--){
		long long n;
		scanf ("%lld",&n);
		long long bcnn1=1;
		for (int i=2;i<=n;i++){
			bcnn1=bcnn(bcnn1,i);
		}
		printf ("%lld\n",bcnn1);
	
	}
}