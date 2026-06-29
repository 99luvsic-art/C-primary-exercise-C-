#include <stdio.h>
int main()
{
	int a,b;

	scanf("score=%d",&a);
	b = a / 10;
	
	switch(b){
	  case 10:
	  case 9:
		printf("the grade of %d is A.",a);
		break;
	  case 8:
		printf("the grade of %d is B.",a);    
  	    break;
	  case 7:
	  	printf("the grade of %d is C.",a);
	    break;
	  case 6:
	 	printf("the grade of %d is D.",a);
	    break;
	  case 5:
	  case 4:
	  case 3:
	  case 2:
	  case 1:
	  case 0:
	  	printf("the grade of %d is E.",a);
	  	break;
	
	return 0;
	  	
	   
	}
	
    


	
	return 0 ; 
}

