#include <stdio.h>
#include <math.h>
int main(){
	int n,m;
	scanf ("%d %d",&n,&m);
	int c1 = sqrt(n);
	int c2 = sqrt(m);
	if (c1*c1<n) c1+=1;
	printf ("%d\n",c2-c1+1);
	for (int i=c1;i<=c2;i++){
		printf("%d\n",i*i);
	}
}
    