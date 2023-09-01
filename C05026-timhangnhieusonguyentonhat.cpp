#include <stdio.h>
#include <math.h>
int nt(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf ("%d",&n);
	int a[n][n],cnt=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf ("%d",&a[i][j]);
		}
	}
	int res =0,hang;
	for (int i=0;i<n;i++){
		int cnt=0;
		for (int j=0;j<n;j++){
			if (nt(a[i][j])){
				++cnt;
			}
		}
		if (cnt>res){
			res=cnt;
			hang=i;
		}
	}
	printf ("%d\n",hang+1);
	for (int i=0;i<n;i++){
		if (nt (a[hang][i])){
			printf ("%d ",a[hang][i]);
		}
	}
}