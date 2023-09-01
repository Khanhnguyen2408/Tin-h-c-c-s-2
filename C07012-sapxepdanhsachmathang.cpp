#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct matHang{
	int id;
	char ten[1000];
	char nhom[1000];
	double mua,ban;
	double lai;
};
typedef struct matHang MH;
void nhap(MH *a){
	getchar();
	gets(a->ten);
	gets(a->nhom);
	scanf ("%lf%lf",&a->mua,&a->ban);
}
void sapxep(MH a[],int n){
	for (int i=0;i<n;i++){
		int min_ind=i;
		for (int j=min_ind+1;j<n;j++){
			if (a[min_ind].lai<a[j].lai){
				min_ind=j;
			}
		}
		MH tmp=a[i];
		a[i]=a[min_ind];
		a[min_ind]=tmp;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	MH a[n];
	for (int i=0;i<n;i++) {
		a[i].id=i+1;
		nhap(&a[i]);
	}
	for (int i=0;i<n;i++){
		a[i].lai=a[i].ban-a[i].mua;
	}
	sapxep(a,n);
	for (int i=0;i<n;i++){
		printf ("%d %s %s %.2lf\n",a[i].id,a[i].ten,a[i].nhom,a[i].lai);
	}
}