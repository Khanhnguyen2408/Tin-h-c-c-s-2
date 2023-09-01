#include <stdio.h>
#include <math.h>
int main(){
	int a[1000];
	int n,i;scanf ("%d",&n);
	for ( i =0; i<n;i++){
		scanf("%d",&a[i]);
		if (a[i]%2==0) printf ("%d ",a[i]);
		}
        printf ("\n");
        for (int j=0;j<n;j++){
		if (a[j]%2!=0) printf ("%d ",a[j]);	}	
		
	}