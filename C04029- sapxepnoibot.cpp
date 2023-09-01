#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a[100];
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	for (int i=0;i<n-1;i++){
		int dem=0;
		for (int j=0;j<n-1-i;j++){
			if (a[j]>a[j+1]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				dem=1;
			}
		}
		if (dem==0) break;
		printf ("Buoc %d:",i+1);
		for (int j=0;j<n;j++){
			printf (" %d",a[j]);
		}
		printf ("\n");
	}
}