/*
 * Introduction.c
 *
 *  Created on: 06-Jul-2020
 *      Author: Clement
 */

#include <stdio.h>
int incorrectcompiler(int argc, char *argv[]) {
	int i = 1;
	printf("%d,%d,%d", i++, i++, i);
	return 0;
}

#include <stdio.h>
int loopUsingMain() {
	static int i = 5;
	if (--i) {
		printf("%d ", i);
		main(10);
	}
}

#include <stdio.h>
int errorMainLoop(void) {
	static int i = 5;
	if (--i) {
		printf("%d ", i);
//		errorloop(10);
	}
}

#include <stdio.h>
#define max 100
int usingDefine(void){
printf("max is %d", max);
return 0;
}

#include <stdio.h>
#define INCREMENT(x) ++x
int macrosCanTakeFunctionLikeArgumentsButAreNotCheckedForDataType(void){
	char*c="GeeksQuiz";
	int i=10;
	printf("%s",INCREMENT(c));
	printf("%d",INCREMENT(i));
	return 0;
}

#include <stdio.h>
#define MULTIPLY(a,b) a*b
int macroArgumentsAreNotEvaluatedBeforeMacroExpansion(void){
	printf("%d",MULTIPLY(2+3,3+5));//2+9+5
	return 0;
}

#include <stdio.h>
#define MULTIPLY2(a,b) (a)*(b)
int macroArgumentsAreNotEvaluatedBeforeMacroExpansionUsingBracketsCanBeSolved(void){
	printf("%d",MULTIPLY2(2+3,3+5));//5*8
	return 0;
}

#include <stdio.h>
#define MERGE(a,b) a##b
int mergingUsingOperatorTokenPassing(void){
	printf("%d",MERGE(12,34));
	return 0;
}

#include <stdio.h>
#define get(a) #a
int macroCanBeConvertedToAStringLiteralByUsingHashBeforeIt(void){
	printf("%s",get(GeeksQuiz));
}

#include <stdio.h>
#define PRINT(i,limit) while(i<limit)\
						{\
						printf("GeeksQuiz");\
						i++;\
						}
int macrosCanBeWrittenInMultipleLinesUsingBackslash(void){
	int i=0;
	PRINT(i,3);
	return 0;
}

#include<stdio.h>
inline int foo()
{
	return 2;
}
int linkerCannotFindFoo(void)
{
	int ret;
	//ret=foo();
	printf("Output is %d\n",ret);
	return 0;
}

#include<stdio.h>
static inline int foo2()
{
	return 2;
}
int solvingLinkerError(void)
{
	int ret;
	ret=foo2();
	printf("Output is %d\n",ret);
	return 0;
}

#include <stdio.h>
#define square(x) x*x
int defineDisadvantage()
{
    // Expanded as 36/6*6
    int x = 36/square(6);
    printf("%d", x);
    return 0;
}

int PreprocessorsAlsoSupportIfElseDirectives(void){
#if VERBOSE >=2
	printf("Trace Message");
#endif
}

#include <stdio.h>
int standardMacrosWhichCanBeUsedToPrintFileProperties ()
{
   printf("Current File :%s\n", __FILE__ );
   printf("Current Date :%s\n", __DATE__ );
   printf("Current Time :%s\n", __TIME__ );
   printf("Line Number :%d\n", __LINE__ );
   return 0;
}

#include <stdio.h>
#define LIMIT 100
int removeAlreadyDefinedMacros()
{
   printf("%d",LIMIT);
   //removing defined macro LIMIT
   #undef LIMIT
   //Next line causes error as LIMIT is not defined
   //printf("%d",LIMIT);
   return 0;
}

#include <stdio.h>
#define LIMIT 1000
int removeAlreadyDefinedMacrosCorrected(void){
	printf("%d",LIMIT);
	#undef LIMIT;
	int LIMIT=1001;
	printf("%d",LIMIT);
	return 0;
}

#include <stdio.h>
//div function prototype
float div(float, float);
#define div(x, y) x/y
int interestingFactAboutMacroUsing()
{
//use of macro div
//Note: %0.2f for taking two decimal value after point
printf("%0.2f",div(10.0,5.0));
//removing defined macro div
#undef div
//function div is called as macro definition is removed
printf("\n%0.2f",div(10.0,5.0));
return 0;
}

//div function definition
float div(float x, float y){
return y/x;
}


//// C program to demonstrate const specifier
//#include <stdio.h>
//int main()
//{
//    const int num = 1;
//
//    num = 5; // Modifying the value
//    return 0;
//}

// In C and C++ internally the default
// type of 'var' is int
enum VARS { asd = 'a' };

// In C++ 11 (can have any integral type):
//enum : type { var = 42; }

// where mytype = int, char, long etc.
// but it can't be float, double or
// user defined data type.
int Enum(void){
	printf("%c",asd);
	return 0;
}



//#include <iostream>
//
//int main()
//{
//    int var = 5;
//    constexpr int k = var;
//    std::cout << k;
//    return 0;
//}



//// C program to demonstrate the problems
//// in 'Macros'
//#include <stdio.h>
//
//#define var 5
//int main()
//{
//    printf("%d ", var);
//
//#ifdef var
//#undef var
//
//// redefine var as 10
//#define var 10
//#endif
//
//    printf("%d", var);
//    return 0;
//}

//#include <stdio.h>
//int fun(int x)
//{
//    return (x+5);
//}
//
//int yy = fun(20);
//
//int main()
//{
//    printf("%d ", yy);
//}


