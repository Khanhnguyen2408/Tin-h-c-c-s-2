#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		float x1,x2,x3,y1,y2,y3,chuvi;
		scanf ("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
		float a,b,c;
		a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		b=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
		c=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
		if (a+b<=c||a+c<=b||b+c<=a){
			printf ("INVALID");
		}
		else {
			chuvi=a+b+c;
			printf ("%.3f",chuvi);
		}
		printf ("\n");
	}
	
}