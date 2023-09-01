#include<stdio.h>
#include<math.h>

int pt(int n){ 
	int sum=0; 
	for(int i = 2; i <= sqrt(n); i++){ 
		while(n%i==0){ 
			sum+=i; 
			n/=i; 
		} 
	} 
	if(n!=1) sum+=n; 
	return sum; 
} 

int main(){ 
	int n; 
	long long sum = 0; 
	scanf("%d",&n); 
	int a[n]; 
	for(int i=0; i<=n-1; i++) scanf("%d",&a[i]); 
	for(int i=0; i<n; i++) sum+=pt(a[i]);
	printf("%lld",sum); 
	return 0; 
}