#include <stdio.h>
int main (){
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	for (int i=0;i<n;i++){
		printf ("Buoc %d: ",i);
		for (int j=0;j<i+1;j++){
			if (a[j]>=a[i]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		int k=i;
		for (int i=0;i<=k;i++){
			printf ("%d ",a[i]);
		}
		printf ("\n");
	}
}