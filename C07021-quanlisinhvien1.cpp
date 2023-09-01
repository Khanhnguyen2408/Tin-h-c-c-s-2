#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct SinhVien{
	char ten[100];
	float mon1,mon2,mon3,tong;
	int msv;
};
typedef struct SinhVien sv;
void nhap(sv *a){
	getchar();
	gets(a->ten);
	scanf ("%f%f%f",&a->mon1,&a->mon2,&a->mon3);
}
void in(sv a){
	printf ("%d %s %.1f %.1f %.1f\n",a.msv,a.ten,a.mon1,a.mon2,a.mon3);
}
sv a[1000];	int n=0;
void chon1(){

	scanf ("%d",&n);
	for (int i=1;i<=n;i++){
		a[i].msv=i;
		nhap(&a[i]);
	}
	printf ("%d\n",n);
}
void chon2(){
	sv b;
	scanf("%d",&b.msv);
	nhap(&b);
	a[b.msv]=b;
	printf ("%d\n",b.msv);
}
void chon3(){
	for (int i=1;i<=n;i++){
		a[i].tong=a[i].mon1+a[i].mon2+a[i].mon3;
	}
	for (int i=1;i<n;i++){
		for (int j=i+1;j<=n;j++){
			int min=i;
			if (a[j].tong<a[i].tong){
				min=j;
			}
		
		sv tmp=a[i];
		a[i]=a[min];
		a[min]=tmp;}
	}
	for (int i=1;i<=n;i++){
		in(a[i]);
	}
}
int main(){
	int t=0;
	while (t!=3){
		scanf ("%d",&t);
		switch (t){
			case 1: chon1(); break;
			case 2: chon2(); break;
			case 3: chon3(); break;
		}
	}
}