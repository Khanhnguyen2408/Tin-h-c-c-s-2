#include <stdio.h>
#include <math.h>
long long thuanNghich(long long n){
	long long x=0,m=n;
	while (n>0){
		x=x*10+n%10;
		n/=10;
	}
	if (x==m) return 1;
	else return 0;
}
long long kt(long long n){
	long long b;
	while (n>0){
		b=n%10;
		n/=10;
		if (b==6){
			return 1;
			break;
		}
	}
	return 0;
}
long long tong(long long n){
	long long sum=0;
	while (n>0){
		sum+=n%10;
		n/=10;
	}
	if (sum%10==8) return 1;
	else return 0;
}
int main (){
	long long a,b;
	scanf ("%lld %lld",&a,&b);
	if (a>b){
		long long c=a;
		a=b;
		b=c;
	}
	for (long long i=a;i<=b;i++){
		if (tong(i)==1&&kt(i)==1&&thuanNghich(i)==1){
			printf ("%lld ",i);
		}
	}
}