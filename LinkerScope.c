/*
 * LinkerScope.c
 *
 *  Created on: 11-Jul-2020
 *      Author: Clement
 */

//Two Strong main
///* foo1.c */
//int main()
//{
//  return 0;
//}
//
///* bar1.c */
//int main()
//{
//  return 0;
//}



//Two Strong Identifiers
///* foo2.c */
//int x = 15213;
//int main()
//{
//  return 0;
//}
//
///* bar2.c */
//int x = 15213;
//void f()
//{
//}


////Strong and Weak identifiers
///* foo3.c */
//#include <stdio.h>
//void f(void);
//int x1 = 15213;
//int main()
//{
//  f();
//  printf("x = %d\n", x1);
//  return 0;
//}
//
///* bar3.c */
//int x1;
//void f()
//{
//  x1 = 15212;
//}



//Two weak
///*a.c*/
//#include <stdio.h>
//void b(void);
//
//int x;
//int main()
//{
//    x = 2016;
//    b();
//    printf("x = %d ",x);
//    return 0;
//}
///*b.c*/
//#include <stdio.h>
//
//int x;
//
//void b()
//{
//    x = 2017;

//}


//The defect with two errors
///*a.c*/
//#include <stdio.h>
//void b(void);
//
//int x1 = 2016;
//int y = 2017;
//int main()
//{
//    b();
//    printf("x = 0x%x y = 0x%x \n", x1, y);
//    return 0;
//}
///*b.c*/
//double x1;
//
//void b()
//{
//    x1 = -0.0;
//}

//// Program 1
//int main()
//{
//   int x;
//   int x = 5;
//   printf("%d", x);
//   return 0;
//}

//// Program 2
//int x;
//int x = 5;
//
//int main()
//{
//   printf("%d", x);
//   return 0;
//}


//int x = 5;
//int x = 10;
//
//int main()
//{
//   printf("%d", x);
//   return 0;
//}


//// C code to illustrate Internal Linkage
//#include <stdio.h>
//
//static int animals = 8;
//const int i = 5;
//
//int call_me(void)
//{
//    printf("%d %d", i, animals);
//}
// C code to illustrate Internal Linkage
//#include <stdio.h>
//
//int main()
//{
//    call_me();
//    animals = 2;
//    printf("%d", animals);
//    return 0;
//}
//#include <stdio.h>
//#include "animal.cpp" // note that animal is included.
//
//int main()
//{
//    call_me();
//    printf("\n having fun washing!");
//    animals = 10;
//    printf("%d\n", animals);
//    return 0;
//}



//// C code to illustrate External Linkage
//#include <stdio.h>
//
//void foo()
//{
//    int a;
//    extern int b; // line 1
//}
//
//void bar()
//{
//    int c;
//    c = b; // error
//}
//
//int main()
//{
//    foo();
//    bar();
//}


//
//// C code to illustrate External Linkage
//#include <stdio.h>
//
//int x = 10;
//int z = 5;
//
//int main()
//{
//
//    extern int y; // line 2
//    extern int z;
//    printf("%d %d %d", x, y, z);
//}

int y = 2;
