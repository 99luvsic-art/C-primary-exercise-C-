#include <stdio.h>
int main() {
	int i,k,m,n;
	int isprise;
	int sum = 0, cnt = 0;
	scanf("%d %d",&m,&n);
	
	for(i = m ; i <= n ; i++){
		isprise = 1; 
		for ( k = 2 ; k * k <= i ; k++ ){
			if ( i % k == 0){
				isprise = 0; 
				break;
			}
    	}
    	if (isprise && i > 2){
		cnt++;
    	sum += i;
    	}
	}
    	printf("%d %d",cnt,sum);
	
	if (isprise) printf("isprise");
	/else printf("no");
	
	return 0;
}
