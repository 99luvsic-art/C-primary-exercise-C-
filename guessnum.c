#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int sum = 0;
	int count = 0;
	int average;
	int a;
	while(a != -1){
	printf("请输入数字\n");
	scanf("%d",&a);
	count++;
	sum = sum + a;
	}
	
	
	printf("平均数是%2.1f",1.0*sum / count);
	return 0;
 
}
