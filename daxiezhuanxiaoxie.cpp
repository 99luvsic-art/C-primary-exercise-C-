
#include <stdio.h>

void change(char a[]) ;

int main(void) {
    char str[81];
    gets(str);
    change(str); //调用函数
    puts(str); //输出

}
void change(char a[]) {
	for (int i = 0; a[i] != '\0'; i++){
		if ( a[i] >= 65 && a[i] <= 90 ){
			a[i] += 32;
		}
	}

}

