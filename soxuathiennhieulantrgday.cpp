#include <stdio.h>
void giaiQuyet(){
	int n,max=0;
	scanf ("%d",&n);
	int a[100],b[100005]={0};
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
		b[a[i]]++;
	}
	for (int i=0;i<n;i++){
		if (b[a[i]]>max){
			max=b[a[i]];
		}
	}
	for (int i=0;i<n;i++){
		if (b[a[i]]==max){
			printf ("%d ",a[i]);
			b[a[i]]=0;
		}
	}
	printf ("\n");
}
int main (){
	int t;
	scanf ("%d",&t);
	while (t--){
		giaiQuyet();
	}
	return 0;
}