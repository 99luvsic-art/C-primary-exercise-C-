#include <stdio.h>
#define MAXN 20
void ArrayShift( int a[], int n, int m );
int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d%d", &n, &m);
    for ( i = 0; i < n; i++ ) 
          scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ )  
    {   if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}
/*6 2 
1 2 3 4 5 6
输出样例：
3 4 5 6 1 2

5 6 
1 2 3 4 5
输出样例：
2 3 4 5 1*/
void ArrayShift( int a[], int n, int m ){
	int b[n] = {0};
	if (n < m) {
		m = m % n;
	}
	for (int i = 0 ; i < n ; i++){
		if (( i + 1 ) <= ( n - m) ){
			b[i] = a[i + m];
		}
		else{
			b[i] = a[i + m - n];
		}
	}
	for (int i = 0 ; i < n ; i++){
		a[i] = b[i];
	}
}



