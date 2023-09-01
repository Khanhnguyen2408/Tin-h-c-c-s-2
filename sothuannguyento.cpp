#include <stdio.h>
#include <math.h>
int nt (int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int sum (int n){
	int a=0;
	while (n>0){
		a+=n%10;
		n/=10;
	}
	if (nt (a)==1) return 1;
	else return 0;
}
int snt(int n){
	while (n>0){
		int a=n%10;
		if (nt (a)==0){
			return 0;
			break;
		}
		else n/=10;
	}
	return 1;
}
int main (){
	int t;
	scanf ("%d",&t);
	while (t--){
		int a,b,dem=0;
		scanf ("%d %d",&a,&b);
		for (int i=a;i<=b;i++){
			if (sum(i)==1&&snt(i)==1&&nt(i)==1){
				dem++;
			}
		}
		printf ("%d\n",dem);
	}
}