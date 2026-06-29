
#include <stdio.h>

int fib(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("num = %d",fib(n));

}

int fib(int n){
	int s[50]={0,1};
	int i;
	for ( i = 2 ; i <= n ;i++){
		s[i] = s[i-1] + s[i-2];  
	}

	return s[i-1];
}
