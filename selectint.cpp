 //输入一个字符串，内有数字和非数字字符，例如：a123x67 222y35i088 09x8 c，请编写程序，将其中连续的数字作为一个整数，依次存放到一维数组a中。例如前面的字符串，应将123存放到a[0]中，67存放到a[1]中……，最后输出整数的个数以及各个整数的值。
//
//输入格式:
//长度不超过100的一个字符串，其中包含整数字符和非整数字符。
//
//输出格式:
//第一行输出整数的个数
//
//第2行输出各个整数的值，以空格间隔，最后一个整数后面没有空格。
//
//输入样例:
//a123x67 222y35i088 09x8 c
//输出样例:
//7
//123 67 222 35 88 9 8
#include <stdio.h>
#include <string.h>
int main(){
	char s[100]={0};
	char a[100]={0};
	fgets(s,100,stdin);
 	int judge = 0 , cnt = 0 , alldigit = 0; 
 	int n = 0; 
//alldigit是a存储的所有有效字符位数 cnt是临时位数 
	int i = 0;
	while(s[i] != '\0'){
		for(;s[i] >= '0' && s[i] <= '9';i++){
			cnt++;
			judge = 1; 
		}
		if(judge){
		int start = i - cnt;
		while (start < i - 1 && s[start] == '0') {
                start++;
                cnt--;
        }
		strncpy(a+alldigit,s+start,cnt);
		alldigit += cnt;
		a[alldigit++] = ' ';
		cnt = 0;
		n++;
		judge = 0;
		}
		i++;
	}
	printf("%d\n",n);
	a[alldigit-1] = '\0';
	printf("%s",a);
}
//	int num = 0;
//	while( *q != '\0'){
//		while( *q != ' '){
//		num = num * 10 + (*q - '0');
//		q++;
//		}
//		printf("%d",num);
//	} 

