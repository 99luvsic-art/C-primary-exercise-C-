#include <stdio.h>

int gcd(int a,int b);

int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d 和 %d 的最大公约数为: %d",a,b,gcd(a,b));


}
int gcd(int a,int b){
	int ret = 0,min;
	if (a<b){
		min = a;
	}else min = b;
	for ( int i = 1 ; i < min ; i++){
		if ( a % i == 0){
			if ( b % i == 0){
				ret = i;
			}	
		}
		
	}
	return ret;
}
