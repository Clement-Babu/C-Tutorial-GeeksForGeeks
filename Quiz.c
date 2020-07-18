/*
 * Temp.c
 *
 *  Created on: 16-Jul-2020
 *      Author: Clement
 */


//
//#include <stdio.h>
//static int num = 16;
//
//int fun()
//{
//  return num--;
//}
//
//int main()
//{
//  for(fun(); fun(); fun())
//    printf("%d ", fun());
//  return 0;
//}




//#include <stdio.h>
//char *fun()
//{
//    static char arr[1024];
//    return arr;
//}
//
//int main()
//{
//    char *str = "geeksforgeeks";
//    strcpy(fun(), str);
//    str = fun();
//    strcpy(str, "geeksquiz");
//    printf("%s", fun());
//    return 0;
//}





//#include <stdio.h>
//
//int main()
//{
// // printf(" "GEEKS %% FOR %% GEEKS"");
//  getchar();
//  return 0;
//}




//#include <stdio.h>
//// Assume base address of "GeeksQuiz" to be 1000
//int main()
//{
//   printf(5 + "GeeksQuiz");
//   return 0;
//}




#include<stdio.h>

int main()
{
    char *s = "Geeks Quiz";
    int n = 7;
    printf("%*s",n,s);
    return 0;
}
