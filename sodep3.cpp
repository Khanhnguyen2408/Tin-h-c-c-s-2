#include <stdio.h>
#include <math.h>
int thuanNghich(int n){
	int x=0,m=n;
	while (n>0){
		x=x*10+n%10;
		n/=10;
	}
	if (x==m) return 1;
	else return 0;
}
int chia10(int n){
	int sum=0;
	while (n>0){
		sum+=n%10;
		n/=10;
	}
	if (sum%10==0) return 1;
	else return 0;
}
int main (){
	int t;
	scanf ("%d",&t);
	while (t--){
		int n;
		scanf ("%d",&n);
		int dem=0;
		int a=pow (10,n-1); int b=pow (10,n);
		for (int i=a;i<=b;i++){
			if (thuanNghich(i)==1&&chia10(i)==1){
				dem++;
			}
		}
		printf ("%d\n",dem);
	}
}