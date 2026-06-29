#include <stdio.h>
# define PI 3.1416
int main()
{
	float r,peri,area;

	scanf("r=%f",&r);
	peri =( PI * r )* 2;
	area =( PI * r )* r;
    
	printf("peri=%.2f,area=%.2f",peri,area);
	
	return 0 ; 
}

