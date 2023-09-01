#include <stdio.h>
#include <math.h>
int uocchiacho2(int n ){int sum = 0;
	scanf("%d",&n);
	for (int i = 1;i<=n;i){
		if (n%2==0) sum+=1;
		else break;
		n/=2;
	}printf ("%d\n",sum);
}
int main (){
	int t,n; scanf ("%d",&t);
	while (t--){
		uocchiacho2(n);
	}
}