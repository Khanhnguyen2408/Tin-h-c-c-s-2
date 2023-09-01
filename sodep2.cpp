#include <stdio.h>
#include <math.h>

int ktdc(long long n){
	int socuoi=n%10, sodau;
	while(n>=10){
		n/=10;
	}
	sodau=n;
	if(sodau==2*socuoi || socuoi==2*sodau) return 1;
	return 0;
}

long long sogiua(long long n){
	int dem=0;
	long long temp=n, m;
	while(n>=10){
		++dem;
		n/=10;
	}
	m=temp/10-n*pow(10,dem-1);
	return m;
}

int tn(long long n){
	long long x=0, temp=n;
	while(n){
		x=x*10+n%10;
		n/=10;
	}
	if(temp==x) return 1;
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(ktdc(n) && tn(sogiua(n))) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
