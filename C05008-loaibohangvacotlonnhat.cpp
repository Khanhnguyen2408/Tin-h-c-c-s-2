#include <stdio.h>
int main (){
	int t;
	scanf ("%d",&t);
	for (int k=0;k<t;k++){
		int m,n;
		scanf ("%d %d",&n,&m);
		int a[n][m];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				scanf ("%d",&a[i][j]);
			}
		}
		int maxh=0,hang,cot,maxc=0;
		for (int i=0;i<n;i++){
			int cnt=0;
			for (int j=0;j<m;j++){
				cnt+=a[i][j];
			}
			if (cnt>maxh){
				maxh=cnt;
				hang=i;
			}
		}
		for (int j=0;j<m;j++){
			int cnt=0;
			for (int i=0;i<m;i++){
				if (i!=hang) cnt+=a[i][j];
			
			if (cnt>maxc){
				maxc=cnt;
				cot=j;
			}
		}}
		printf ("Test %d:\n",k+1);
		for (int i=0;i<n;i++){
			if (i!=hang){
				for (int j=0;j<m;j++){
					if (j!=cot){
						printf ("%d ",a[i][j]);
					}
				
				}
			}	printf ("\n");
		}
	}
}