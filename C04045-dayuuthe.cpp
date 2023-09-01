#include <stdio.h>
#include <string.h>
int check(int a[1000],int n){
	int chan=0,le=0;
	for (int i=1;i<n;++i){
		if (a[i]%2==0) chan++;
		else le++;
	}
	if (chan>le) return 1;
	else return 0;
}
int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		int a[1000],n=0;
		while (scanf ("%d",&a[n++])){
			char c=getchar();
			if (c=='\n') break;
		}
		if ((check(a, n) && n % 2 == 0) || (check(a, n) == 0 && n % 2 == 1))
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}