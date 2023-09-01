#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf ("%d",&t);
	while(t--){
		int a[1000][1000]={0};
		int n,m,i;
		scanf("%d %d %d",&n,&m,&i);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int k=1;k<=n;k++){
			int j=k;
			while(j>1){
				if(a[j][i]<a[j-1][i]){
					int temp;
					temp=a[j][i];
					a[j][i]=a[j-1][i];
					a[j-1][i]=temp;
				}
				--j;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}
		if (a[j][u]>a[i][u]){
					int temp=a[i][u];
					a[i][u]=a[j][u];
					a[j][u]=temp;
				}
			}
		}
		for (int i=1;i<=n;i++){
			for (int j=1;j<=m;j++){
				printf ("%d ",a[i][j]);
			}
			printf ("\n");
			}
		}
	}
	return 0;	
}
	
