#include <stdio.h>
#include <string.h>
int dk1(char c[20]){
	if (c[6] + 1 == c[7] && c[7] + 1 == c[8] && c[8] + 1 == c[10] && c[10] + 1 == c[11]) return 1;
	else return 0;
}
int dk2(char c[20]){
	if (c[6] == c[7] && c[7] == c[8] && c[8] == c[10] && c[10] == c[11]) return 1;
	else return 0;
}
int dk3 (char c[20]){
	if (c[6] == c[7] && c[7] == c[8] && c[10] == c[11]) return 1;
	else return 0;
}
int dk4(char c[20]){
	if ((c[6] == '6' || c[6] == '8') && (c[7] == '6' || c[7] == '8') && (c[8] == '6' || c[8] == '8') && (c[10] == '6' || c[10] == '8') && (c[11] == '6' || c[11] == '8')) return 1;
	else return 0;
}
void solve(char c[20]){
	if (dk1(c)||dk2(c)||dk3(c)||dk4(c)) printf ("YES");
	else printf ("NO");
}
int main (){
	int t;
	scanf ("%d",&t);
	getchar();
	while (t--){
		char c[20]="";
		gets(c);
		solve(c);
		printf ("\n");
	}
	return 0;
}