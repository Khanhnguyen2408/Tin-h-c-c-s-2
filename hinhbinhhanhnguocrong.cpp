#include <stdio.h>
#include <math.h>
int main (){
	int a,b,k;//a là số dòng b là số cột
	scanf ("%d %d",&a,&b);
	for (int i= 1;i<=a;i++){k=a-1;
	for (int j=1;j<=i-1; j++){
		printf("~");
	}
	for( int l=1; l<=b;l++){
		if (i==1||i==a||l==1||l==b){
		printf ("*");}
		else printf (".");}
		printf ("\n");
	k--;
		
	}
}