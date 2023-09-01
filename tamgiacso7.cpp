#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int k=i, tmp=n-1;
		for(int j=1; j<=i; j++){
			if(j<2){
				printf("%d ", k),k=k+tmp;
			}
			else{
				printf("%d ", k), k=k+--tmp;
			}
		}
		printf("\n");
	}
	return 0;
}


