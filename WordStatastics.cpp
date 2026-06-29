/*根据给定的英文段落统计各个不同的英文单词的出现次数，
并按出现次数从大到小输出单词和其出现次数，
若出现次数一样则按单词的ASCII顺序从小到大输出。

（1）单词区分大小写，如"the"与"The"当作2个不同的单词；
（2）除了大小写英文字母外的其它符号都当作单词间隔符，如"I'm"当作2个单词；
（3）每段英文由若行文字组成。

另外，因为是随便写的英文，可能不遵守语法，
例如，单词间可能不止
一个空格，而行末却可能还有些空格。

输入格式:
输入数据的第一行为一个正整数T, 表示测试数据的组数。
然后是T组测试数据，
每组测试数据先输入一个正整数n(n<=10)，
然后是n行文字（每行长度不超过200字符，
且只包含英文字母、空格符和标点符号，每个单词的长度不超过20字母）。

输出格式:
对于每组测试，按描述中要求的顺序逐行输出各个不同单词及其出现次数，之间空一个空格。

输入样例:
2
2
  Just for you.
I say,  "Just for you."
2
I am a student.
You're a teacher.
输出样例:
Just 2
for 2
you 2
I 1
say 1
a 2
I 1
You 1
am 1
re 1
student 1
teacher 1
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define length 200
typedef struct _word{
	char word[20];
	int num;
}word;
void count(char s[][200],int n);
int main(){
	int t,n;
	scanf("%d",&t);
	for (int j = 0 ; j < t ; j++){
		scanf("%d",&n);
		while(getchar() != '\n');
		char s[n][length];
		for(int i = 0 ; i < n ; i++){
			fgets(s[i],length,stdin); 
		}
	
	count(s,n);
	}
}
void count(char s[][200],int n){
	word *words = (word *)malloc(100*sizeof(word)) ;
	int k = 0;
	int found = 0; 
	for(int i = 0; i < n; i++ ){
		int start = 0;
		int end = 0; 
		for(int j = 0 ; s[i][j] != '\0' ; j++){
			if(isalpha(s[i][j])){
				if(!isalpha(s[i][j-1])&&j > 0){
					start = j ;
				}		
				if(j == 0 && isalpha(s[i][j]) !=0 ){
					start = j;
				}
				if(!isalpha(s[i][j+1])){
					end = j;
					int wordlength = end - start + 1;
					found = 0; 
					if(k>0){
						for(int m = 0 ; m < k ; m++){
						if(strncmp(words[m].word,s[i]+start,wordlength) == 0
						&&strlen(words[m].word)==wordlength){
							words[m].num++;
							found = 1;		
							break;
							} 
						}
					}
					if(!found) {
					strncpy(words[k].word,s[i]+start,wordlength);
					words[k].word[wordlength] = '\0'; 
					words[k].num = 1;
					k++;
					}
				}	
			}
		}
	}
for(int i = 0; i < k - 1; i++){
        for(int j = 0; j < k - 1 - i; j++){
            
            if(words[j].num < words[j+1].num || 
              (words[j].num == words[j+1].num && strcmp(words[j].word, words[j+1].word) > 0)){
                
                // 交换整个结构体
                word temp = words[j];
                words[j] = words[j+1];
                words[j+1] = temp;
            }
        }
    }
	for(int i = 0; i < k ; i++){
		printf("%s %d\n",words[i].word,words[i].num);
	}
	free(words); 
}



