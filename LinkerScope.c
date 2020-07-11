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


