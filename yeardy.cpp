# include <stdio.h>
void month_day ( int year, int yearday, int *pmonth, int *pday);

int main(void)
{
   int day, month, year, yearday;     /*  定义代表日、月、年和天数的变量*/
   scanf("%d%d", &year, &yearday );        
   month_day (year, yearday, &month, &day );/* 调用计算月、日函数  */ 
   printf("%d %d %d\n", year, month, day );    
   return 0;    
}

/*month_day ( year, yeardy, *pmonth, *pday)，
通过参数pmonth和pday返回计算得出的月和日。
例如，输入2000和61，分别返回3和1，
即2000年的第61天是3月1日 */

void month_day ( int year, int yeardy, int *pmonth, int *pday){
	int run = 0;
	int run = 0;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
	    run = 1;
	}
	if(!run){
		if(yeardy < 32) *pmonth = 1,*pday = yeardy;
		else if(yeardy < 60) *pmonth = 2,*pday = yeardy - 31;
		else if(yeardy < 91) *pmonth = 3,*pday = yeardy - 59;
		else if(yeardy < 121) *pmonth = 4,*pday = yeardy - 90;
		else if(yeardy < 152) *pmonth = 5,*pday = yeardy - 120;
		else if(yeardy < 182) *pmonth = 6,*pday = yeardy - 151;
		else if(yeardy < 213) *pmonth = 7,*pday = yeardy - 181;
		else if(yeardy < 244) *pmonth = 8,*pday = yeardy - 212;
		else if(yeardy < 274) *pmonth = 9,*pday = yeardy - 243;
		else if(yeardy < 305) *pmonth = 10,*pday = yeardy - 273;
		else if(yeardy < 335) *pmonth = 11,*pday = yeardy - 304;
		else if(yeardy < 366) *pmonth = 12,*pday = yeardy - 334;
	}
	if(run){
		if(yeardy < 32) *pmonth = 1,*pday = yeardy;
		else if(yeardy < 61) *pmonth = 2,*pday = yeardy - 31;
		else if(yeardy < 92) *pmonth = 3,*pday = yeardy - 60;
		else if(yeardy < 122) *pmonth = 4,*pday = yeardy - 91;
		else if(yeardy < 153) *pmonth = 5,*pday = yeardy - 121;
		else if(yeardy < 183) *pmonth = 6,*pday = yeardy - 152;
		else if(yeardy < 214) *pmonth = 7,*pday = yeardy - 182;
		else if(yeardy < 245) *pmonth = 8,*pday = yeardy - 213;
		else if(yeardy < 275) *pmonth = 9,*pday = yeardy - 244;
		else if(yeardy < 306) *pmonth = 10,*pday = yeardy - 274;
		else if(yeardy < 336) *pmonth = 11,*pday = yeardy - 305;
		else if(yeardy < 367) *pmonth = 12,*pday = yeardy - 335;
	}
	
}
