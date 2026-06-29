/*要求先输入正整数N，
然后输入N个类型为结构体stud的数组元素，
计算每个学生的总分，
输出每个学生的学号、姓名、三门课的成绩及总分；
计算全部成绩的平均分并输出；
输出总分最高同学的各项信息。
struct  stud {
    int num;        //学号
	char name[10];  //姓名
    int score[3];   //3门课成绩
    int sum;        //总分
};

输入格式:
先输入不超过10的一个正整数N，然后每行输入一个学生的信息（学号、姓名、三门课成绩）。
学号在整数范围内，姓名长度小于10个字符。

输出格式:
首先输出每个学生的信息（包括学号、姓名、三门课成绩、总分），数据项之间空1格，每人一行；再输出全部成绩的平均分；最后输出总分最高（假设没有相同总分）同学的学号、姓名、三门课成绩及总分，数据项之间空1格。

输入样例:
在这里给出一组输入。例如：

4
1  张三  81  85  82
2  李四  82  78  74
3  王五  85  74  90
4  赵六  77  85  79
输出样例:
在这里给出相应的输出。例如：

1 张三 81 85 82 248
2 李四 82 78 74 234
3 王五 85 74 90 249
4 赵六 77 85 79 241
总平均分=81.000000
3 王五 85 74 90 249
*/
#include <stdio.h>
struct  stud {
    int num;        //学号
	char name[10];  //姓名
    int score[3];   //3门课成绩
    int sum;        //总分
};
int main(){
	int n;
	scanf("%d",&n);
	struct stud list[n];
	int bigsum = 0;
	int max = 0 , address = 0;
	for(int j = 0 ; j < n ; j++){
		list[j].sum = 0;
	}
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &list[i].num);   
        scanf("%s", list[i].name);
	    for(int j = 0 ; j < 3 ; j++){
	        scanf("%d", &list[i].score[j]);
	        list[i].sum += list[i].score[j];    
		}
		bigsum += list[i].sum;
		if(list[i].sum > max ) {
		max = list[i].sum;
		address = i;
		}
    }
    double avg = 0;
    avg = (double)bigsum / n / 3;
	for(int i = 0 ; i < n ; i++){
		printf("%d ", list[i].num); 
		printf("%s ", list[i].name); 
		for(int j = 0 ; j < 3 ; j++){
			printf("%d ", list[i].score[j]);
		}
		printf("%d\n", list[i].sum); 
	}
	printf("总平均分=%f\n", avg);
	printf("%d ", list[address].num); 
	printf("%s ", list[address].name); 
	for(int j = 0 ; j < 3 ; j++){
		printf("%d ", list[address].score[j]);
	}
	printf("%d", list[address].sum);
} 
