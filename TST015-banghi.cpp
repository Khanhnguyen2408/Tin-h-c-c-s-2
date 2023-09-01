#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
struct TamGiac{
	float a,b,c,dientich;
};
typedef struct TamGiac tg;
int main(){
	int n;
	scanf ("%d",&n);
	struct TamGiac tg[n],temp;
	for (int i=0;i<n;i++){
		scanf ("%f %f %f",&tg[i].a,&tg[i].b,&tg[i].c);
		float p=(tg[i].a+tg[i].b+tg[i].c)/2;
		tg[i].dientich=sqrt(p*(p-tg[i].a)*(p-tg[i].b)*(p-tg[i].c));
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (tg[i].dientich>tg[j].dientich){
				temp=tg[i];
				tg[i]=tg[j];
				tg[j]=temp;
			}
		}
	}
	for (int i=0;i<n;i++){
		printf ("%.0f %.0f %.0f\n",tg[i].a,tg[i].b,tg[i].c);
	}
}