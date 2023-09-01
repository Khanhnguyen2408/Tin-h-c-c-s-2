#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct SinhVien{
	int id;
	char ten[50];
	char ngay[50];
	float mon1,mon2,mon3,tong;
};
typedef struct SinhVien sv;
void nhap(sv*a){
	getchar();
	gets(a->ten);
	gets(a->ngay);
	scanf ("%f%f%f",&a->mon1,&a->mon2,&a->mon3);
}
int main(){
	int n;
	scanf ("%d",&n);
	struct SinhVien sv[n],tmp;
	for (int i=0;i<n;i++){
		nhap(&sv[i]);
		sv[i].id=i+1;
		sv[i].tong=sv[i].mon1+sv[i].mon2+sv[i].mon3;
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (sv[i].tong<sv[j].tong){
				tmp=sv[i];
				sv[i]=sv[j];
				sv[j]=tmp;
			}
		}
	}
	for (int i=0;i<n;i++){
		printf ("%d %s %s %.1f\n",sv[i].id,sv[i].ten,sv[i].ngay,sv[i].tong);
	}
}