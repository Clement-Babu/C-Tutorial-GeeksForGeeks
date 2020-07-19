/*
 * IO.c
 *
 *  Created on: 18-Jul-2020
 *      Author: Clement
 */


// C/C++ program to demonstrate return value
// of printf()
#include <stdio.h>

int CharacterCount()
{
    char st[] = "CODING";

    printf("While printing ");
    printf(", the value returned by printf() is : %d",
                                    printf("%s", st));

    return 0;
}




// C/C++ program to demonstrate return value
// of printf()

#include <stdio.h>
int IntCount()
{
    long int n = 123456789;

    printf("While printing ");
    printf(", the value returned by printf() is : %d",
                                    printf("%d", n));

    return 0;
}




// C/C++ program to demonstrate return value
// of printf()

#include <stdio.h>
int ScanCount()
{
    char a[100], b[100], c[100];

    // scanf() with one input
    printf("\n First scanf() returns : %d",
                            scanf("%s", a));

    // scanf() with two inputs
    printf("\n Second scanf() returns : %d",
                       scanf("%s%s", a, b));

    // scanf() with three inputs
    printf("\n Third scanf() returns : %d",
                  scanf("%s%s%s", a, b, c));

    return 0;
}


#include <stdio.h>
int GetAndPutChar(void){
	int i;
	if((i=getchar())!=EOF){
		printf("%d",i);
		putchar(i);
	}
	return 0;
}






#include<stdio.h>

int PrintSlicer()
{
    char *s = "Geeks Quiz";
    int n = 7;
    printf("%.*s",n,s);
    return 0;
}



#include "stdio.h"
int PrintContinue()
{
 int a = 10;
 int b = 15;

 printf("=%d",(a+1),(b=a+2));
 printf(" %d=",b);

 return 0;
}





//6487834
#include <stdio.h>
struct Ournode {
  char x, y, z;
};

int CharMemory() {
  struct Ournode p = {'1', '0', 'a' + 2};
  struct Ournode *q = &p;
  printf("%d",(char)q+1);
  return 0;
}



#include <stdio.h>
void fun1(char *s1, char *s2) {
  char *temp;
  temp = s1;
  s1 = s2;
  s2 = temp;
}
void fun2(char **s1, char **s2) {
  char *temp;
  temp = *s1;
  *s1 = *s2;
  *s2 = temp;
}
int StringTwister() {
  char *str1 = "Hi", *str2 = "Bye";
  fun1(str1, str2);
  printf("%s %s", str1, str2);
  fun2(&str1, &str2);
  printf("%s %s", str1, str2);
  return 0;
}





// simple print on stdout
#include<stdio.h>
int Printf()
{
   printf("hello geeksquiz");
   return 0;
}



// Example program to demonstrate sprintf()
#include<stdio.h>
int SPrintf()
{
    char buffer[50];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(buffer, "Sum of %d and %d is %d", a, b, c);

    // The string "sum of 10 and 20 is 30" is stored
    // into buffer instead of printing on stdout
    printf("%s", buffer);

    return 0;
}






#include<stdio.h>
int FPrintF()
{
    int i, n=2;
    char str[50];

    //open file sample.txt in write mode
    FILE *fptr = fopen("sample.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }

    for (i=0; i<n; i++)
    {
        puts("Enter a name");
        gets(str);
        fprintf(fptr,"%d.%s\n", i, str);
    }
    fclose(fptr);

    return 0;
}





// Example for getc() in C
#include <stdio.h>
int GetC()
{
   printf("%c", getc(stdin));
   return(0);
}




// Example for getchar() in C
#include <stdio.h>
int GetChar()
{
   printf("%c", getchar());
   return 0;
}





// Example for getch() in C
#include <stdio.h>
#include <conio.h>
int GetCh()
{
   printf("%c", getch());
   return 0;
}




#include <stdio.h>
#include <conio.h>
// Example for getche() in C
int GetChe()
{
  printf("%c", getche());
  return 0;
}




// C program to demonstrate
// the behavior of %i and %d
// with printf statement
#include <stdio.h>

int DandIAreSimilarInPrint()
{
    int num = 9;

    // print value using %d
    printf("Value of num using %%d is = %d\n", num);

    // print value using %i
    printf("Value of num using %%i is = %i\n", num);

    return 0;
}




// C program to demonstrate the difference
// between %i and %d specifier
#include <stdio.h>

int DandIAreNotSimilarInScan()
{
    int a, b, c;

    printf("Enter value of a in decimal format:");
    scanf("%d", &a);

    printf("Enter value of b in octal format: ");
    scanf("%i", &b);

    printf("Enter value of c in hexadecimal format: ");
    scanf("%i", &c);

    printf("a = %i, b = %i, c = %i", a, b, c);

    return 0;
}

// C program to illustrate situation
// where flush(stdin) is required only
// in certain compilers.
#include <stdio.h>
int BufferNotCleaned()
{
    char str[20];
    int i;
    for (i=0; i<2; i++)
    {
        scanf("%[^\n]s", str);
        printf("%s\n", str);
        // fflush(stdin);
    }
    return 0;
}



// C program to illustrate flush(stdin)
// This program works as expected only
// in certain compilers like Microsoft
// visual studio.
#include <stdio.h>
#include<stdlib.h>
int BufferClean()
{
    char str[20];
    int i;
    for (i = 0; i<2; i++)
    {
        scanf("%[^\n]s", str);
        printf("%s\n", str);

        // used to clear the buffer
        // and accept the next string
        fflush(stdin);
    }
    return 0;
}





// C Code to explain why not
// clearing the input buffer
// causes undesired outputs
#include<stdio.h>
int StringBufferRepeate()
{
    char str[80], ch;

    // Scan input from user -
    // GeeksforGeeks for example
    scanf("%s", str);

    // Scan character from user-
    // 'a' for example
    ch = getchar();

    // Printing character array,
    // prints “GeeksforGeeks”)
    printf("%s\n", str);

    // This does not print
    // character 'a'
    printf("%c", ch);

    return 0;
}




// C Code to explain why adding
// "while ( (getchar()) != '\n');"
// after "scanf()" statement
// flushes the input buffer
#include<stdio.h>

int StringBufferSolution()
{
    char str[80], ch;

    // scan input from user -
    // GeeksforGeeks for example
    scanf("%s", str);

    // flushes the standard input
    // (clears the input buffer)
    while ((getchar()) != '\n');

    // scan character from user -
    // 'a' for example
    ch = getchar();

    // Printing character array,
    // prints “GeeksforGeeks”)
    printf("%s\n", str);

    // Printing character a: It
    // will print 'a' this time
    printf("%c", ch);

    return 0;
}




/*c program demonstrating fscanf and its usage*/
#include<stdio.h>
int AdvanceScanfFilter()
{
    FILE* ptr = fopen("abc.txt","r");
    if (ptr==NULL)
    {
        printf("no such file.");
        return 0;
    }

    /* Assuming that abc.txt has content in below
       format
       NAME    AGE   CITY
       abc     12    hyderbad
       bef     25    delhi
       cce     65    bangalore */
    char buf[100];
    while (fscanf(ptr,"%*s %*s %s ",buf)==1)
        printf("%s\n", buf);

    return 0;
}






// A simple C program to demonstrate
// working of putchar_unlocked()
#include <stdio.h>
int FastersGetCh()
{
    // Syntax is same as getchar()
    //char c = getchar_unlocked();

    //putchar_unlocked(c);

    return 0;
}





// C program to illustrate isprint() and iscntrl() functions.
#include <stdio.h>
#include <ctype.h>
int CType(void)
{
    char ch = 'a';
    if (isprint(ch)) {
        printf("%c is printable character\n", ch);
    } else {
        printf("%c is not printable character\n", ch);
    }

    if (iscntrl(ch)) {
        printf("%c is control character\n", ch);
    } else {
        printf("%c is not control character", ch);
    }
    return (0);
}





// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

// Driver program
int main(void)
{
    // This program will create different sequence of
    // random numbers on every program run

    // Use current time as seed for random generator
    srand(time(0));

    for(int i = 0; i<4; i++)
        printf(" %d ", rand());

    return 0;
}
