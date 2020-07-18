/*
 * ScanSet.c
 *
 *  Created on: 18-Jul-2020
 *      Author: Clement
 */


/* A simple scanset example */
#include <stdio.h>

int ScanSet(void)
{
    char str[128];

    printf("Enter a string: ");
    scanf("%[A-Z]s", str);

    printf("You entered: %s\n", str);

    return 0;
}




/* Another scanset example with ^ */
#include <stdio.h>

int StopScanSet(void)
{
    char str[128];

    printf("Enter a string: ");
    scanf("%[^o]s", str);

    printf("You entered: %s\n", str);

    return 0;
}






/* implementation of gets() function using scanset */
#include <stdio.h>

int GetsUsingScanSet(void)
{
    char str[128];

    printf("Enter a string with spaces: ");
    scanf("%[^\n]s", str);

    printf("You entered: %s\n", str);

    return 0;
}





void Gets()
{
   char str[20];
   gets(str);
   printf("%s", str);
   return;
}


#define MAX_LIMIT 20
void Fgets()
{
   char str[MAX_LIMIT];
   fgets(str, MAX_LIMIT, stdin);
   printf("%s", str);

   getchar();
   return;
}



#include<stdio.h>
int PutsCursor()
{
    puts("Geeksfor");
    puts("Geeks");
    getchar();
    return 0;
}



#include<stdio.h>
int Fputs()
{
    fputs("Geeksfor", stdout);
    fputs("Geeks", stdout);
    getchar();
    return 0;
}



#include<stdio.h>
int PrintVulnerability()
{
    // % is intentionally put here to show side effects of using printf(str)
    printf("Geek%sforGeek%s");
    getchar();
    return 0;
}




#include<stdio.h>
int PutsSolution()
{
    puts("Geek%sforGeek%s");
    getchar();
    return 0;
}




#include<stdio.h>

int NFormatSpecifier()
{
  int c;
  printf("geeks for %ngeeks ", &c);
  printf("%d", c);
  getchar();
  return 0;
}
