#include <stdio.h>
#include <math.h>
int dem(int n){int sum = 0;
		for (int i = 1; i <= sqrt(n) ; i++){
			if (n%i==0){
				if (i%2==0){
					sum+=1;}
				if (i != n/i && n/i%2==0) sum+=1;
			}
} return sum;
}
int main(){
	int t,n; 
	scanf ("%d",&t);
	if (t<=100){
	while (t--){scanf ("%d\n",&n);
        printf ("%d\n", dem(n));
		}
	}	}
