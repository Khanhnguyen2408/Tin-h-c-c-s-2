#include <stdio.h>
#include <math.h>
int nt(int n){
	if(n<2) return 0;
	for (int i=2;i<=sqrt (n);i++){
		if (n%i==0){
			return 0;
			break;
		} 
	} 
	return 1;
}
int main (){
	int n,sum=0;
	scanf ("%d",&n);
	int m=n,a[n][m];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf ("%d",&a[i][j]);
		}
	}
	
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (nt(a[i][j])==1){
				sum+=a[i][j];
			}
			
		}
	}
	printf ("%d",sum);
}