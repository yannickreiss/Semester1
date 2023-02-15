/* 
 * GGT_C
 * Yannick Reiss
 * Definition des Algorithmus fuer den groessten gemeinsamen Teiler
 */
#include "ggt.h"

int ggtCalls = 0;

int ggT ( int a, int b )
{
    ++ggtCalls;
    if (ggtCalls > MAX_ITERATIONS)
    {
        printf("Zu viele Aufrufe");
        return -1;
    }
    else
    {
        if (a == b)
        {
            return a;
        }
        else if (a < b)
            {
                return ggT(a, b - a);
            }
            else
            {
                return ggT(a - b, b);
            }
    }

}