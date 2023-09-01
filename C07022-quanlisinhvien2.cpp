#include <stdio.h>
#include <string.h>
struct SinhVien{
	int ma;
	char ten[50];
	double diem[3];
};
typedef struct SinhVien sv;
void nhap(sv *a){
	getchar();
	gets(a->ten);
	for (int i=0;i<3;i++){
		scanf ("%lf",&a->diem[i]);
	}
	for (int i=0;i<3;i++){
		int min =i;
		for (int j=i+1;j<3;j++){
			if (a->diem[min]>a->diem[j]) min=j;
		}
		double tmp=a->diem[i];
		a->diem[i]=a->diem[min];
		a->diem[min]=tmp;
	}
}
void in(sv a){
	printf ("%d %s ",a.ma,a.ten);
	for (int i=0;i<3;i++){
		printf ("%.1f ",a.diem[i]);
	}
	printf ("\n");
}
sv a[1000];
int n=0;
void chon1(){
	scanf ("%d",&n);
	for (int i=1;i<=n;i++){
		a[i].ma=i;
		nhap(&a[i]);
	}
	printf ("%d\n",n);
}
sv b;
void chon2(){
	scanf ("%d",&b.ma);
	nhap(&b);
	a[b.ma]=b;
	printf ("%d\n",b.ma);
}
void chon3(){
	in(b);
}
int main(){
	int t=0;
	while (t!=3){
		scanf ("%d",&t);
		switch(t){
			case 1: chon1(); break;
			case 2: chon2(); break;
			case 3: chon3(); break;
		}
	}
}