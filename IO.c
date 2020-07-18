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
