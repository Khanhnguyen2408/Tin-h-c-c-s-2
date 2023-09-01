#include <stdio.h>
#include <math.h>
int main (){
	int a,b,a1,b1;
	scanf ("%d %d",&a,&b);
	a1=a;b1=b;
	int suma=0;
	int sumb=0;
	for (int i=1;i<=a;i){
		suma+=a%10;
		a/=10;
	}
	for (int i=1;i<=b;i){
         sumb+=b%10;
		 b/=10;	
	}
	if (suma<=sumb) printf ("%d %d",a1,b1);
	else if (suma>sumb) printf ("%d %d",b1,a1);
	}