#include <stdio.h>
/*
输入格式:
第一行输入商品种类个数n，后面依次输入商品的名称，数量，单价。

输出格式:
输出每种商品的名称、数量、单价和总价，最后一行输出所有商品累加总额。

输入样例:
4
bread 3 5.2
milk 5 3.5
cookie 30 1.5
cake 25 5.2
输出样例:
bread 3 5.2 15.60
milk 5 3.5 17.50
cookie 30 1.5 45.00
cake 25 5.2 130.00
sum=208.10
*/
void readname(char name[100][20], int i);
void prtname(char name[100][20], int i);
int main(){
	int n;//n是商品数量 
	double sum;
	char name[100][20];
	int num[100];
	double price[100];
	double amt[100];
	scanf("%d",&n);
	for ( int i = 0 ; i < n ; i++ ){
		while (getchar() != '\n');
		readname( name, i);
 		scanf("%d",&num[i]);	
		scanf("%lf",&price[i]);	
		amt[i] = num[i] * price[i];
		sum += amt[i];
	}
	for (int i = 0 ; i < n ; i++ ){
		prtname( name,  i);
 		printf(" %d", num[i]);
 		printf(" %.1lf",price[i]);
 		printf(" %.2lf\n",amt[i]);
	}
	printf("%.2lf",sum);
}
void readname(char name[100][20],int i){
	int j = 0;
	char ch;
	while ( (ch = getchar()) != ' '){
			name[i][j] = ch;
			j++;
	}  
	name[i][j] = '\0';
}
void prtname(char name[100][20], int i){
	int j = 0;
	while ( name[i][j]!= '\0'){
		printf("%c",name[i][j]);
		j++; 
	}  
}


