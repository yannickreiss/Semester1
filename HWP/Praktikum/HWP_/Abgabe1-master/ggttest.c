/* 
 * GGTTEST_C
 * Yannick Reiss
 * Ausfuehrung des Algorithmus fuer den groessten gemeinsamen Teiler.
 */
#include <stdio.h>
#include "ggt.h"

#define A 7
#define B 4

int main ( void )
{
    // Data
    int ggt;
    
    // Code
    ggt = ggT(A, B);
    printf("Moin, wie geht's?\n");
    if (ggt > 0)
    {
        printf("Der groesste Gemeinsame Teiler von %d und %d ist %d.\n", A, B, ggt);
        return 0;
    }
    else
    {
        printf("Die Funktion wurde zu oft aufgerufen für %d und %d", A, B);
        return -1;
    }
}