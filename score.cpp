#include <stdio.h>
/*有一个班4个学生，5门课。
①求第一门课的平均分：
②找出有2门以上课程不及格的学生，
输出他们的学号和全部课程成绩和平均成绩；
③找出平均成绩在90分以上或全部课程成绩在85分以上的学生。分别编3个函数实现
50 60 30 30 29
99 99 99 99 99
87 87 87 87 87
99 82 90 90 83
*/
int avg(int scr[4][5],int row,int col);
void fail(int scr[4][5],int avglec[]);
void good(int scr[4][5],int avgstu[]); 


int main(){
    int scr[4][5];
    int avgstu[4]={0},avglec[5]={0};
    for(int i = 0 ; i < 4  ; i++ ){
        for(int j = 0 ; j < 5 ; j++){
            scanf("%d",&scr[i][j]);
        }
    }
    for (int i = 0 ; i < 4 ; i++){
    	avgstu[i] = avg(scr,i+1,0);
	}
	for (int i = 0 ; i < 5 ; i++){
    	avglec[i] = avg(scr,0,i+1); 
	}
	fail( scr,avglec);
	good( scr,avgstu);
	
}
int avg(int scr[4][5],int row,int col){
	int amount = 0;
	int average = 0;
		if(!row){
		for ( int i = 0 ; i < 4 ; i++){
			amount += scr[i][col-1];
		}
	average = amount / 4;
	return average;
	}
	if(row){
		for ( int i = 0 ; i < 5 ; i++){
			amount += scr[row-1][i];
		}
	average = amount / 5;
	return average;	
	}
}
void fail(int scr[4][5],int avglec[]){  
	for ( int i = 0 ; i < 4 ; i++){
		int cnt = 0 ;  
		for( int j = 0 ; j < 5 ; j++){
			if ( scr[i][j]  < avglec[j]){
				cnt++;
			}
		}
		if(cnt > 2){
			printf("%d号不及格\n",i+1);
		}	
	}
}
void good(int scr[4][5],int avgstu[]){
	for (int i = 0 ; i < 4 ; i++){
		int judge = 0;
		if (avgstu[i] >= 90){
			judge = 1;
		}
		if (!judge){
			for (int j = 0 ; j < 5 ; j++){
				if(scr[i][j] < 85){
					break;
				}
			judge = 1;
			}
		}
		printf("%d号优秀\n",i+1);
	}	
		
	
	
	
}
