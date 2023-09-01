#include <stdio.h>
#include <math.h>
int main (){
	int n, soChuso = 0; scanf ("%d",&n);
	int chuSocuoi= n%10;
	int chuSodau;
	int m=n;
	for ( int i =1; i<=n;i){
	    chuSodau=n%10;
	    n/=10;
	    soChuso+=1;
	}
	int giua = m- chuSodau*(int)pow(10,soChuso-1)-chuSocuoi;
	int res = chuSocuoi*(int)pow(10,soChuso-1)+ giua+chuSodau;
printf ("%d",res);
}