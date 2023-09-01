#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
struct phanSo{
	int tu,mau;
};
typedef struct phanSo ps;
void nhap(ps *a){
	scanf ("%d",&a->tu);
	scanf ("%d",&a->mau);
}
int gcd(int a,int b){
	if (b==0) return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
void rutgon(int *a,int *b){
	int ucln=gcd(*a,*b);
	*a/=ucln;
	*b/ucln;
}
int main(){
	int n;
	scanf ("%d",&n);
	struct phanSo p,q;
	for (int i=1;i<=n;i++){
		nhap(&p);
		nhap(&q);
		printf ("Case #%d:\n",i);
		rutgon(&p.tu,&p.mau);
		rutgon(&q.tu,&q.mau);
		//quy dong
		int mausochung=lcm(q.mau,p.mau);
		p.tu*=mausochung/p.mau;
		p.mau=mausochung;
		q.tu*=mausochung/q.mau;
		q.mau=mausochung;
		printf ("%d/%d %d/%d\n",p.tu,p.mau,q.tu,q.mau);
		//cong 2 phan so
		struct phanSo tong;
		tong.tu=p.tu+q.tu;
		tong.mau=mausochung;
		rutgon(&tong.tu,&tong.mau);
		printf ("%d/%d\n",tong.tu,tong.mau);
		//chia 2 phan so
		tong.tu=p.tu*q.mau;
		tong.mau=p.mau*q.tu;
		rutgon(&tong.tu,&tong.mau);
		printf ("%d/%d\n",tong.tu,tong.mau);
	}
	return 0;
}