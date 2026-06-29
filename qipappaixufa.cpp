#include <stdio.h>
/*

输入样例：
输入2行数据，第一行为数组长度，第2行为数组元素，如下所示：

10
5 5 9 4 8 7 1 3 4 2
输出样例：
输出排序后的数组元素，例如：

5 2 9 3 8 4 1 5 4 7

*/ 
void selectSort(int num[],int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    selectSort(arr,n);
    //输出
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void selectSort(int num[],int n){
	int temp;
	for ( int j = 0,a = 2*j+1; a < n-1 ; j++){
		for ( int i = 0,b = 2*i+1 ; b < n-1-a ; i++){
			if (num[b] > num[b+2]){
				temp = num[b];
				num[b] = num[b+2];
				num[b+2] = temp;
			}
		}
	}	
}




