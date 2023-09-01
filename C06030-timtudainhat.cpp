#include <stdio.h>
#include <string.h>
int main(){
	int max=0,dem=0;
	char c[1005];
	char a[1005][20];
	while (scanf ("%s",c)!=-1){
		strcpy(a[dem],c);
		dem++;
	}
	for (int i=0;i<dem;i++){
		if (max<strlen(a[i])) max=strlen(a[i]);
	}
	char y[1005][20];
	int n=0;
	for (int i=0;i<dem;i++){
		if (max==strlen(a[i])){
			strcpy(y[n],a[i]);
			n++;
		}
	}
	int b[1005];
	for (int i=0;i<n;i++){
		b[i]=1;
	}
	for (int i=0;i<n;i++){
		if (b[i]==1){
			for (int j=i+1;j<n;j++){
				if (strcmp(y[i],y[j])==0){
					b[j]=0;
					b[i]++;
				}
			}
		}
	}
	for (int i=0;i<n;i++){
		if(b[i]>0)printf ("%s %d %d\n",y[i],max,b[i]);
		
	}
}