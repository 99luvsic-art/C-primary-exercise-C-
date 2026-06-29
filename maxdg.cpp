#include <stdio.h>
#include <string.h>
void find_maxword(char str[], char maxword[]);

int main(){
  char s[300];
  char word[30];
  printf("please input a string:\n");
  gets(s);
  find_maxword(s,word);
  printf("the max word is: %s",word);
  return 0;
}

void find_maxword(char str[], char maxword[]){
	int i = 0;
	int cnt1 = 0;
	int maxdg = 0;
	int tem = 0; 
	int word_start = 0;  

	while(str[i] != '\0'){
		if(str[i] == ' '){
			if(cnt1 > maxdg) {
			maxdg = cnt1 ;
			tem = i - cnt1;
		}
		while(str[i+1] == ' ' && str[i+1] != '\0'){
				i++;
		}
		cnt1 = 0;
		word_start = i + 1;
		}else cnt1++; 
		i++;
	} 
	if(cnt1 > maxdg) {
		maxdg = cnt1 ;
		tem = i- cnt1; 
	}
	
	strncpy(maxword,str+tem,maxdg); 
	maxword[maxdg] = '\0';
	if(maxword[maxdg-1] < 'A'){
		maxword[maxdg - 1] = '\0';
	} 
}
// I am a student in jinan university.


