/*
 * ArgHeader.c
 *
 *  Created on: 19-Jul-2020
 *      Author: Clement
 */


#include<stdio.h>
#include<stdarg.h>
int fun(int args,...)
{
	int sum;
	va_list apargs;
	va_start(apargs,args);
	for(int i=0;i<3;i++)
	sum=va_arg(apargs,int);
	return sum;

}
int va(void){

	printf("hahahaha %d",fun(4,1,2,23));
	return 0;
}
