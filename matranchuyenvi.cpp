#include <stdio.h>
#include <math.h>
int main(){
	int i,j,m,n,a[100][100];
	scanf("%d%d",&m,&n); //m:hàng, n:cột
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	 for(i=0;i<n;i++){
		 for(j=0;j<m;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}