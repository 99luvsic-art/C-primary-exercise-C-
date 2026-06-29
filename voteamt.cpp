//用程序模拟一个活动的投票统计功能。
//首先输入参选人员个数n，再输入每位参选人员名字
//再输入选票张数m，再依次输入选票中所选的参选人名
//（选票中必须选参选中的其中一位）。
//在输入选票过程中统计每位参选人的得票数，
//最终按得票数由高到低的顺序输出参选人和其票数（空格分隔），
//如果票数相同，则按名字从小到大的顺序（ASCII码顺序）输出。
//提示：选票信息按如下结构定义：
//
//struct vote
//{
//    char name[20];//名字
//    int count;//票数
//};
//输入样例:
/*3
Li
Wang
Zhang
8
Li
Wang
Li
Zhang
Li
Li
Wang
Zhang
*/
//输出样例:
//Li 4
//Wang 2
//Zhang 2

#include <stdio.h>
#include <string.h>
struct vote
{
    char name[20];//名字
    int count;//票数
};
int main(){
    int n ,m; 
    scanf("%d",&n);
    struct vote list[n];
    for(int i = 0 ; i < n ; i++){
    	scanf("%s",list[i].name);
    	list[i].count = 0;

	}
    scanf("%d",&m);
    for(int j = 0 ; j < m ; j++){
    	char str[20] = {0};
	   	scanf("%s",str);
	   	for(int i = 0 ; i < n ; i++){
	   		if(strcmp(str,list[i].name)==0){
	   			list[i].count++;
			} 
		}
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n - i - 1 ; j++){
			int need_swap = 0;
			if(list[j].count < list[j+1].count){
				need_swap = 1;
			}
			else if (list[j].count == list[j+1].count){
				if(strcmp (list[j].name,list[j+1].name) > 0 ){
				need_swap = 1;
				}
			}
			if (need_swap) {
                struct vote temp; 
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
		}
	}
    for(int i = 0 ; i < n ; i++){
		printf("%s %d",list[i].name,list[i].count);
        if(i < n - 1 ){
		printf("\n");
		}
    }
    
} 






