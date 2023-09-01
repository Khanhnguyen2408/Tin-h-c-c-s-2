#include <stdio.h>
int main (){
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[n],b[m];
	int dem1[10000]={0};
	int dem2[10000]={0};
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
		dem1[a[i]]=1;
	}
	for (int i=0;i<m;i++){
		scanf ("%d",&b[i]);
		dem2[b[i]]=1;
	}
	for (int i=0;i<1000;i++){
		if (dem1[i]==1&&dem2[i]==1){
			printf ("%d ",i);
		}
	}
	printf ("\n");

	for (int i=0;i<1000;i++){
		if (dem1[i]==1&&dem2[i]==0){
			printf ("%d ",i);
		}
	}
	printf ("\n");
	
	for (int i=0;i<1000;i++){
		if (dem1[i]==0&&dem2[i]==1){
			printf ("%d ",i);
		}
	}
	printf ("\n");
	
}
