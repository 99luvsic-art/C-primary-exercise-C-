#include <stdio.h>

int main(){
	int n, i;
	scanf("n=%d", &n);

	int num = n;
	int digits [5];
	int count = 0;
	int reverse = 0;

	while(num>0){
        
		digits[count] = num % 10;
		reverse = reverse * 10 + digits[count];
		num /= 10;
		count++;
	}
	printf("all digits of %d are ",n);

	for( i = 0;i <count;i++){
      
        printf("%d", digits[i]);
        printf(" ");		
	}
    printf(".\n");
    printf("the number of %d is %d.\n", n, count);
    printf("the reversed number is %d.\n",reverse);

	 return 0;
}
