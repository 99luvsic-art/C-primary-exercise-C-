//当输入n名学生（不超过20名）的成绩时，输入信息包括姓名、学号、性别、800米成绩、立定跳远成绩和俯卧撑/仰卧起坐的成绩，（假定输入成绩都是正确的）。如果为男生，最后一项成绩为俯卧撑，如果为女生则为仰卧起坐成绩。请输出所有各科目（800米、立定跳远、俯卧撑、仰卧起坐）的平均成绩（整数）及需补考(单个科目成绩低于60分)学生的姓名、学号和性别。
//
//输入格式:
//第一行为学生数n
//第二行开始为n个学生的姓名、学号、性别、成绩1、 成绩2 、成绩3 
//
//输出格式:
//第一行为每个科目的平均成绩，以逗号分隔
//
//第二行开始为需补考人员的姓名、学号和性别，以逗号分隔，每个学生信息占一行
//
//姓名,学号,性别 
//
//…

/*输入样例:
6
Lili 2001 M 80 50 90
Jim 2002 F 70 70 90
Tom 2003 F 90 80 90
May 2004 F 80 50 60
Jary 2005 M 30 50 90
Xiao 2006 M 60 80 100
输出样例:
68,63,93,80
Lili,2001,M
May,2004,F
Jary,2005,M
*/

#include <stdio.h>
#include <string.h>
struct score{
	char name[20];
	int yr;
	char sex;
	int sc1;
	int sc2;
	int sc3;	
};
int main(){
	int n;
	scanf("%d",&n);
	int avg[5] = {0};
	struct score list[n];
	int m = 0 ; int f = 0;
	for(int i = 0 ; i < n ; i++){
		scanf("%s", list[i].name);   
        scanf("%d", &list[i].yr);
        scanf(" %c", &list[i].sex); 
        scanf("%d", &list[i].sc1);
        scanf("%d", &list[i].sc2);
        scanf("%d", &list[i].sc3);
	}
	for( int j = 0 ; j < n ;j++){
		avg[0] += list[j].sc1; 
		avg[1] += list[j].sc2;
		if(list[j].sex == 'M'){
			avg[2] += list[j].sc3;
			m++;
		}
		else {
		avg[3] += list[j].sc3;
		f++;
		}
	}
	avg[0] /= n;
	avg[1] /= n;
	avg[3] /= f;
	avg[2] /= m;
	for(int i = 0 ; i < 4 ; i++){
		printf("%d",avg[i]); 
		if( i < 3 ) printf(",");
		else printf("\n");
	}
	for(int i = 0 ; i < n ; i++){
		int fail = 0;
		if(list[i].sc1 < 60 ||list[i].sc2< 60 ||list[i].sc3 < 60 ) fail = 1;
		if(fail){
			printf("%s,", list[i].name); 
			printf("%d,", list[i].yr); 
			printf("%c\n", list[i].sex);
		}
	}
	
}



