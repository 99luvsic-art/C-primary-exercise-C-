//每个学生的信息有学号（数字序列，长度小于12），
//姓名（长度小于10），身高、体重、BMI、
//肥胖状态（0为正常，-1偏瘦，1偏胖）。
//
//输入格式:
//输入正整数n（大于等于3小于20），
//随后给出n行学生学号、姓名、身高、体重信息数据，姓名和学号没有空白字符。
//
//输出格式:
//分类输出体脂正常、偏瘦、偏胖学生的学号、姓名及BMI指数，数据间\t隔开，
//每行输出一个学生信息，若不存在该类学生，输出“无此类学生”
//
/*
输入样例1:
5
210101 李明 1.76 76
210102 王珊 1.67 45
210103 刘伟 1.83 90
210104 马丽 1.56 62
210105 赵乐 1.72 65
输出样例1:
在这里给出相应的输出。例如：

BMI正常学生信息：
210105    赵乐    21.97
BMI偏瘦学生信息：
210102    王珊    16.14
BMI偏胖学生信息：
210101    李明    24.54
210103    刘伟    26.87
210104    马丽    25.48
输入样例2:
3
210104 马丽 1.56 62
210105 赵乐 1.72 65
210106 朱文 1.78 70
输出样例2:
BMI正常学生信息：
210105    赵乐    21.97
210106    朱文    22.09
BMI偏瘦学生信息：
无此类学生
BMI偏胖学生信息：
210104    马丽    25.48
*/

#include <stdio.h>
struct info{
	int num;
	char name[30];
	float hgt;
	int wgt;
	float bmi;
	int judge;
}; 
void prt(struct info list[],int temp1,int temp2,int n){
	if(!temp1) printf("无此类学生\n");
	else{
		for(int i = 0 ; i < n ; i++){
			if (list[i].judge == temp2){
				printf("%d\t",list[i].num);
				printf("%s\t",list[i].name);
				printf("%.2f\n",list[i].bmi);
				temp1--;
			}
		}
	}
}

int main(){
	int n;
	int fat=0;
	int reg=0;
	int slim=0;
	scanf("%d",&n);
	struct info list[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &list[i].num);   
        scanf("%s", list[i].name);
        scanf("%f", &list[i].hgt);
        scanf("%d", &list[i].wgt);
		list[i].bmi = list[i].wgt / (list[i].hgt * list[i].hgt);
		if(list[i].bmi > 23.9) list[i].judge = 1 , fat++;
		else if(list[i].bmi > 18.5) list[i].judge = 0 , reg++;
		else list[i].judge = -1 , slim++;
	}
	int temp1,temp2;
	printf("BMI正常学生信息：\n");
	temp1 = reg;
	temp2 = 0;
	prt(list,temp1,temp2,n);
	printf("BMI偏瘦学生信息：\n");
	temp1 = slim;
	temp2 = -1;
	prt(list,temp1,temp2,n);
	printf("BMI偏胖学生信息：\n");
	temp1 = fat;
	temp2 = 1;
	prt(list,temp1,temp2,n);
}


