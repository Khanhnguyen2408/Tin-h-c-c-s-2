#include <stdio.h>
#include <math.h>
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int sort(int a[101],int b[101],int n){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]>a[j]){
				swap(&a[i],&a[j]);
				swap(&b[i],&b[j]);
			}
		}
	}
}
int main (){
	int n;
	int a[101]={0},b[101]={0};
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
		scanf ("%d %d",&a[i],&b[i]);
	}
	sort(a,b,n);
	long long ans=a[0];
	for (int i=0;i<n;i++){
		ans+=b[i];
		if (ans<a[i+1]) ans = a[i+1];
	}
	printf("%lld",ans);
}