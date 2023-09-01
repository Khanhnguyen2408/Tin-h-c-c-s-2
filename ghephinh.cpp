#include<stdio.h> 
#include<math.h> 
int main(){ 
	int a[6]; 
	for(int i=0;i<6;i++) scanf("%d",&a[i]); 
	long long dientich=a[0]*a[1]+a[2]*a[3]+a[4]*a[5]; 
	long long r=sqrt(dientich); 
	int dem=0; 
	int k; 
	if(r*r==dientich){ 
		for(int i=0;i<6;i++){ 
			if(a[i]==r){
	 			dem++; 
	 			k=i; 
			} 
		}
	 	if(dem==1||dem==3){ 
	    	if(dem==3){ 
	  			int sum=0; 
	  			for(int i=0;i<6;i++){
	   				if(a[i]!=r) sum+=a[i]; 
	   			 } 
				if(sum==r) printf("YES"); 
			    else printf("NO"); 
			}else{ 
				int m=0; int h=0; 
				if(k%2==0){ 
					for(int i=0;i<6;i++){ 
						if(i!=k&&i!=k+1){ 
							if(a[i]+a[k+1]==r) m++; 
							else h+=a[i]; 
						} 
					} 
				}
				else{ 
					for(int i=0;i<6;i++){ 
						if(i!=k&&i!=k-1){ 
							if(a[i]+a[k-1]==r) m++; 
							else h+=a[i]; 
						} 
					} 
				} 
		       if(m==2&&h==r) printf("YES"); 
		       else printf("NO"); 
			} 
		} 
		else printf("NO");
	}
	else printf("NO"); 
}