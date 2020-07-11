/*
 * Quiz.c
 *
 *  Created on: 11-Jul-2020
 *      Author: Clement
 */

#include <stdio.h>
int main(void)
{
int x = 0;
            if (5 < 4 || (7 / x) == 0)
            {
                printf("|| executed because 5>4 evaluates to         true.No divide by zero error.");
            }
            else
            {
                printf("Won't execute!");
            }
}
