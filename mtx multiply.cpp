#include <stdio.h>

int main(){
int i,j,k,m,n,p;
	int mtx1[7][7],mtx2[7][7],mtx3[7][7];
	printf("输入矩阵1的行数与列数\n"); 
	scanf("%d %d",&m,&n);
	for (i = 0;i < m; i++ ){
		for(j = 0;j < n; j++){
		printf("输入第%d行第%d列的元素\n",i+1,j+1);
		scanf("%d",&mtx1[i][j]);
		}
	}
	printf("输入矩阵2的行数与列数\n");
	scanf("%d %d",&n,&p);
	for (i = 0;i < n; i++ ){
		for(j = 0;j < p; j++){
		printf("输入第%d行第%d列的元素\n",i+1,j+1);
		scanf("%d",&mtx2[i][j]);
		}
	}
	for (i = 0;i < m; i++ ){
		for(j = 0;j < p; j++){
		mtx3[i][j] = 0;
		}
	}
	for (i = 0;i < m; i++ ){
		for(j = 0;j < p; j++){
			for(k = 0; k < n; k++){
			mtx3[i][j] += mtx1[i][k] * mtx2[k][j];	
			}
		}
	}
	for (i = 0; i < m; i++) {
    	for (j = 0; j < p; j++) {
       	 printf("%4d", mtx3[i][j]);
       
        	if (j + 1 != p) {  
           	 printf(" ");
       	 	}
   	 	}
    	printf("\n");
	}
} 
