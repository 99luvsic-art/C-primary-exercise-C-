/*查找敏感词
请实现判定特定字符串（字符串长度不超过100）
中是否包含敏感词（长度不超过10）的功能。

输入格式:
待检查字符串

敏感词

输出格式:
存在敏感词输出“敏感词的起始位置为X”，否则，输出“没有敏感词”

输入样例1:
hello world! time OK!
time

敏感词的起始位置为13

输入样例2:
hello world! time OK!
secret

没有敏感词
*/
#include <stdio.h>
#include <string.h>
int main(){
	char s1[100];
	char s2[10];
	int judge = 0;
	gets(s1);
	gets(s2);
	int ad = 0;
	int i = 0;
	while(s1[i] != '\0'){
		int j = 0;
		int k = i;
		if(s1[i] == s2[j]){
			ad = i;
			while(s1[k] != '\0' && s2[j] != '\0' && s1[k] == s2[j]){
				k++;
				j++;
				if(s2[j] == '\0') {
					printf("敏感词的起始位置为%d",i);
					judge = 1;
					break;
				}
			}
		}
		i++;
	}	
	
	if(!judge) printf("没有敏感词");
} 



