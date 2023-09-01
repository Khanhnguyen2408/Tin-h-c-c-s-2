#include <stdio.h>
#include <math.h>
long long ucln(long long a, long long b ){
	if (b==0) return a;
	else return ucln(b,a%b);
}
long long bcnn(long long a, long long b){
	return a*b/ucln(a,b);
}
int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		long long a,b;
		scanf ("%lld %lld",&a,&b);
		long long ans=a;
		for (int i=a+1;i<=b;i++){
			ans=bcnn(ans,i);
		}
		printf ("%lld\n",ans);
	}
}