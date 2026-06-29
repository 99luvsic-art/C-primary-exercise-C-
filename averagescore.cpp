#include <stdio.h>
#define M 30
#define N 5

void Score_Avg(int (*p)[N], int m, int n);

int main()
{
    int  score[M][N], m, n, i, j;

    scanf("%d%d", &m, &n);  //输入学生数和课程数
    for(i = 0; i<m; i++)
       for(j = 0; j<n; j++)
          scanf("%d", &score[i][j]);
    Score_Avg(score, m, n); //计算并输出学生平均分

    return 0;
}

/* 
输入样例：
2 3
61 62 70
75 82 90
输出样例：
64.3
82.3 */
void Score_Avg(int (*p)[N], int m, int n){
	double a[30] = {0};
	for (int i = 0; i < m ; i++ ){
		for ( int j = 0 ; j < n ; j++ ){
			a[i] += p[i][j]; 			
		} 
		a[i] /= n;
	}
	for (int i = 0 ; i < m ; i++){
		printf("%.1f\n",a[i]);
	}
	
	 
	
}

