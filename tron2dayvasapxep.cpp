#include <stdio.h>
#include <math.h>
int main (){
	int t;
	scanf ("%d",&t);
	for (int k=1;k<=t;k++){
		int n;
		scanf ("%d",&n);
		int a[n],b[n];
		for (int i=0;i<n;i++){
			scanf ("%d",&a[i]);
		}
		for (int i=0;i<n;i++){
			scanf ("%d",&b[i]);
		}
		printf ("Test %d:\n",k);
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				if (a[i]>a[j]){
					int temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				if (b[i]<b[j]){
					int temp=b[j];
					b[j]=b[i];
					b[i]=temp;
				}
			}
		}
		for (int i=0;i<2*n;i++){
			if (i%2==0) {
				printf ("%d ",a[i/2]);
			}
			else printf ("%d ",b[i/2]);
		}
		printf ("\n");
	}
}