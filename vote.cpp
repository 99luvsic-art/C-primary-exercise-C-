#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void counts(int n,char (*p)[6]); 
int main(){
	int n ; 
	printf("please input n=");
	scanf("%d",&n);
	char (*vote)[6] = (char (*)[6])malloc(n * sizeof (char[6]));
	for(int i = 0 ; i < n ; i++){
		scanf("%s",vote[i]);
	}
	counts(n,vote);
	free(vote);
	return 0 ;
}
void counts(int n,char (*p)[6]){
	int num[6] = {0};
	for (int i = 0 ; i < n ; i++){
		int cnt = 0; 
		for(int j = 0 ; j < 5 ; j++){
			if(p[i][j] == '1'){
				cnt++;
			}
		}
		if(cnt > 2){
			for(int j = 0 ; j < 5 ; j++){
				if(p[i][j] =='1'){
					num[j]++;
				}
			}
		}
	}
	for(int i = 0 ; i < 5 ;i++){
		printf("person%d got %d votes\n",i+1,num[i]);
	}
}



