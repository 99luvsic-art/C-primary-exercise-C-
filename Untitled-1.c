int main(){
	int n,i,j,k;
	scanf("%d",&n);
	    for(j = 1; j <= n / 2 + 1 - i; j++){
			printf(" ");
		}
		for(k = 1;k <= i*2 -1;k++){
			printf("*");
		}
		printf("\n");	
	}
	for (i = n / 2; i>= 1; i--){
		for(j = 1; j <= n / 2 + 1 - i; j++){
			printf(" ");
	    }
	    for(k = 1;k <= i*2 -1;k++){
	    	printf("*");
		}
		printf("\n");	
	}
	
	return  0;
} 