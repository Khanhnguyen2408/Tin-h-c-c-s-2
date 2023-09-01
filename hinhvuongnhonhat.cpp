#include <stdio.h>
#include <math.h>
int main (){
	int x1,x2,y1,y2,x3,x4,y3,y4;
	scanf ("%d %d %d %d",&x1,&y1,&x2,&y2);
	scanf ("%d %d %d %d",&x3,&y3,&x4,&y4);
	int maxX=x2>=x4?x2:x4;
	int minX=x3<=x1?x3:x1;
	int maxY=y4>=y2?y4:y2;
	int minY=y3<=y1?y3:y1;
	int ngang=maxX-minX;
	int doc=maxY-minY;
	if (ngang>=doc){
		printf ("%d",ngang*ngang);
	}
	else {
		printf ("%d",doc*doc);
	}
}