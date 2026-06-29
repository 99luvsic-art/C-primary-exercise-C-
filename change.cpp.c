#include <stdio.h>
int main(){
	int a ;
	double sum = 0.0,t;
	scanf ("%d",&a);
	for(a;a>0;a--){
		t = 1.0 / a * (-1.0)^(a-1.0);
		sum = sum + t;
	}
	printf("%f\n",t);
	printf("%d\n",a);
	printf("%lf\n",sum);

}
