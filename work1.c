#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char num [6];
	
	printf("输入一个正整数");
	scanf("%s", num);
	
	int x,b,c,d,e,f,y;
	x = atoi(num);
	
	int digits = strlen(num);
	printf("有%d位数\n",digits);
	
	switch(digits){
		case 1:{
			printf("%s\n", num);
			printf("%s", num);
			break;
		}
		case 2:{
			f = x / 10; 
			e = x % 10;
			printf("十位数是%d\n",f);
			printf("个位数是%d\n",e);
			e = e * 10;
			y = f + e;
			printf("逆序输出%d\n",y);
			break;
		}
		case 3:{
			d = x / 100;
	        f =(x / 10) % 10; 
			e = x % 10;
			printf("百位数是%d\n",d);
			printf("十位数是%d\n",f);
			printf("个位数是%d\n",e);
			e = e * 100;
			f = f * 10; 
			y = f + e +d;
			printf("逆序输出%d\n",y);				
			
			break;
		}
		case 4:{
			c = x / 1000;
			d =(x / 100) % 10;
	        f =(x / 10) % 10; 
			e = x % 10;
			printf("千位数是%d\n",c);
			printf("百位数是%d\n",d);
			printf("十位数是%d\n",f);
			printf("个位数是%d\n",e);
			e = e * 1000;
			f = f * 100; 
			d = d * 10;
			y = f + e + d + c;
			printf("逆序输出%d\n",y);				
			
			break;
		}
		case 5:{
			b = x / 10000;
			c =(x / 1000) % 10;
			d =(x / 100) % 10;
	        f =(x / 10) % 10; 
			e = x % 10;
			printf("万位数是%d\n",b);
			printf("千位数是%d\n",c);
			printf("百位数是%d\n",d);
			printf("十位数是%d\n",f);
			printf("个位数是%d\n",e);
			e = e * 10000;
			f = f * 1000; 
			d = d * 100;
			c = c * 10;
			y = f + e + d + c + b;
			printf("逆序输出%d\n",y);	
						
				break;
		}
	}
	 return 0;
}
