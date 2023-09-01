#include <stdio.h>
#include <math.h>
int main(){
	int t;scanf("%d\n",&t);
	while (t--){
		int a[100];
		int n;scanf("%d\n",&n);
		for (int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]%2==0){
				printf("%d ",a[i]);
			}
		}printf ("\n");
	}
}