#include <stdio.h>
int main (){
	int t;
	scanf ("%d",&t);
	while (t--){
		int n;
		scanf ("%d",&n);
		int a[n],p=0;
		for (int i=0;i<n;i++){
			scanf ("%d",&a[i]);
		}
		for (int i=0;i<n-1;i++){
			if (p==1) break;
			for (int j=i+1;j<n;j++){
				if (a[i]==a[j]){
					printf ("%d\n",a[i]);
					p=1;
					break;
				}
			}
		}
		if (p==0) printf("NO\n");
	}
}