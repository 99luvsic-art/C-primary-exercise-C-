 #include <stdio.h>
int main(void)
{
	int num,n;//num是已经给定的随机数 n是允许猜测的次数 
	int a,b;//a是用户猜测的数字 
	int cnt = 0;
	int ref = 0;
	scanf("%d %d",&num ,&n);
	
	for ( b = 0 ; b < n  ; b++ ){
		cnt++;
		scanf("%d",&a);
		if ( a > num ){
			printf("Too big\n");
		}
		if ( a < num && a > 0 ){
			printf("Too small\n");
		}
		if ( a == num ){
			ref = 1;
			break;
		}
		if ( a <= 0 ){
			break;
		}
	}
	if (ref){
		if ( cnt == 1 ) printf("Bingo");
		if ( cnt == 2 || cnt == 3) printf("lucky you");
		if ( cnt > 3 && cnt <= n ) printf("goodguess");
	}  
	else{
		printf("game over");
	}
	return 0;
}
