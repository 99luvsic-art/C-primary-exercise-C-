#include <stdio.h>
#include <math.h>

int is_prime(int num){
	if (num <=1 ) return 0;	
	for ( int k = 2 ; k * k <= num ; k++ ){
		if ( num % k == 0){
			return 0;
			break;
		}
	}
	return 1;
}

int main(){
  int num;
  printf("please input a integer:\n");
  scanf("%d",&num);
  if(is_prime(num))
    printf("%d is a prime.",num);
  else
    printf("%d is not a prime.",num);  
}
