#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
struct Pokemon{
	char ten[1000];
	int m,k,diem;
};
typedef struct Pokemon pk;
void nhap(pk*a){
	getchar();
	gets(a->ten);
	scanf ("%d%d",&a->k,&a->m);
}
int main(){
	int n;
	scanf ("%d",&n);
	struct Pokemon pk[n];
	int cnt=0,max=0;
	for (int i=0;i<n;i++){
		nhap(&pk[i]);
		pk[i].diem=0;
		while (pk[i].m>=pk[i].k){
			++pk[i].diem;
			pk[i].m=pk[i].m-pk[i].k+2;
		}
		cnt+=pk[i].diem;
		if (max<=pk[i].diem){
			max=pk[i].diem;
		}
	}
	printf ("%d\n",cnt);
	for (int i=0;i<n;i++){
		if(max==pk[i].diem){
			printf ("%s",pk[i].ten);
			break;
		}
	}
	
}