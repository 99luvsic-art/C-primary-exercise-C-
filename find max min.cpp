#include <stdio.h>
void sublistMaxMin ( int* from, int* to, int* max, int* min );
int main()
{
    int list[1000];
    int len=0;
    int from, to, max, min;
    scanf("%d", &len);
    int i;
    for(i=0; i<len; i++){
        scanf("%d", &list[i]);
    }
    scanf("%d%d", &from, &to);
    sublistMaxMin(list+from, list+to, &max, &min);
    printf("list[%d-%d]: max = %d, min = %d\n", from, to, max, min);
    return 0;
}
/*
输入样例：
5
1 2 3 4 5
0 4
输出样例：
list[0-4]: max = 5, min = 1
*/

void sublistMaxMin ( int* from, int* to, int* max, int* min ){
	
	* max = *from;
	* min = *from;
	int* start = from;
	int* end = to;
	while ( start <= end ){
		if ( *start > *max ){
			*max = *start;
		}
		if ( *start < *min ){
			*min = *start;
		}
		start++;
		
	}
	
	
	
}
