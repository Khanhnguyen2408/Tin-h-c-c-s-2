#include <stdio.h>
#include <math.h>
int snt(int n){
	if (n<2)return 0;
	for (int a= 2; a<=sqrt(n);a++){
		if (n%a==0){ return 0; 
		}}
	 return 1;
	
}
int main (){
	int n; scanf ("%d",&n);
	for (int i=0;i<=n;i++){
		if (snt(i)==1) printf ("%d\n",i);
	}
}