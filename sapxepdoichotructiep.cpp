#include <stdio.h>
int main(){
	int n,min;
	int a[100];
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	for (int i=0;i<n-1;i++){
		min=i;
		for (int j=i+1;j<n;j++){
			if (a[min]>a[j]){
				int temp=a[min];
				a[min]=a[j];
				a[j]=temp;
				}
			}
			printf ("Buoc %d: ",i+1);
			for (int i=0;i<n;i++){
				printf ("%d ",a[i]);
			}
		printf ("\n");
	}
}