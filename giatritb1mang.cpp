#include <stdio.h>
#include <math.h>
int main (){
	int n;float sum=0;
	scanf ("%d",&n);
	float a[n];
	for (int i=0;i<n;i++){
		scanf ("%f",&a[i]);
	}
	for (int i=0;i<n;i++){
		sum+=a[i];
	}
	float b=sum/n;
	printf ("%.3f",b);
}