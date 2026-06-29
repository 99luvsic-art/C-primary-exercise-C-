#include <stdio.h>

void fun(int a[] ,int len);

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
   
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    //调用函数
    fun(arr,n);
    //输出
    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");

}
void fun(int a[] ,int len){
	int max=0,min=0,temp;
	for (int i = 0; i < len ; i++){
		if (a[i] > a[max] ){
			max = i;
		}
		if (a[i] < a[min]){
			min = i;
		}
	}
	temp = a[max];
	a[max] = a[min];
	a[min] = temp;
}
