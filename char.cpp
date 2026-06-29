#include <stdio.h>
int main(){
	
	int n,a,b,i,c,t,j,sum,d;
	
	
	printf("输入水仙花位数\n");
	scanf("%d",&n); 
	
	for ( a = n , b = 1 ; a > 1 ; a--){
		b *= 10;//ab用来控制需要遍历的数的范围 
	}
	
	for ( i = b ; i < b * 10 ; i++ ){
		sum = 0; 
		t = i;//c用来取余
		 
		for(  ; t > 0 ; t /= 10 ){
			c = t % 10;
			d = 1;
			
			for( j = 0 ; j < n ; j++){
				d *= c;
			}
		sum += d;
			}
		if( sum == i ){
			printf("%d\n",i);
		    }			
		}	
	return 0;
}
