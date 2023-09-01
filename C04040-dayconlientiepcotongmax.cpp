#include <stdio.h>
#include <math.h>
long long max(long long a,long long b){
	if(a>b) return a;
	return b;
}
int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		long long n;
		scanf ("%lld",&n);
		long long a[n];
		for (int i=0;i<n;i++){
			scanf ("%lld",&a[i]);
		}
		long long tong=0;
		long long maxx=0;
		for (int i=0;i<n;i++){
			tong+=a[i];
			if(tong<0) tong=0;
			maxx=max(maxx,tong);
		}
		printf ("%lld\n",maxx);
	}
}