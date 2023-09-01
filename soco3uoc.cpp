#include <stdio.h>
#include <math.h>

int snt[1000001];
void nt(){
	for(int i=0; i<=1000000; i++){
		snt[i]=1;
	}
	snt[0]=snt[1]=0;
	for(int i=2; i<=1000; i++){
		if(snt[i]){
			for(int j=i*i; j<=1000000; j+=i){
				snt[j]=0;
			}
		}
	}
}


int main(){
	int N; scanf("%d", &N);
	nt();
	for(int i=1; i<=N; i++){
		long long l, r; scanf("%lld%lld", &l, &r);
		if(l<r){
			int dem=0;
			for(int i=sqrt(l); i<=sqrt(r); i++){
				if(snt[i] && 1ll*i*i>=l) ++dem;
			}
			printf("%d\n", dem);
		}
		else{
			int dem=0;
			for(int i=sqrt(r); i<=sqrt(l); i++){
				if(snt[i] && 1ll*i*i>=r) ++dem;
			}
			printf("%d\n", dem);	
		}
	}
	return 0;
}
