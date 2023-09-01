#include <stdio.h>
#include <math.h>
long long so6(long long n){
	long long a,r=0;
	long long b=1;
	while (n>0){
		a=n%10;
		if (a==5) a=6;
		r+=a*b;
		b*=10;
		n/=10;
	}
	return r;
}
long long so5(long long n){
	long long a,r=0;
	long long b=1;
	while (n>0){
		a=n%10;
		if (a==6) a=5;
		r+=a*b;
		b*=10;
		n/=10;
	}
	return r;
}
int main (){
	int t;
	scanf ("%d",&t);
	while (t--){
		long long a,b;
		scanf ("%lld %lld",&a,&b);
		long long max,min;
		max=so6(a)+so6(b);
		min=so5(a)+so5(b);
		printf ("%lld %lld\n",min,max);
	}
}