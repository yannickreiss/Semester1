/*
 * GGT_H
 * Yannick Reiss
 * Deklaration des Algorithmus des groessten gemeinsamen Teilers (ggT)
 */
#ifndef GGT_H
#define GGT_H

#include <stdio.h>

#define MAX_ITERATIONS 100000

extern int ggtCalls;

// ggT:int -> a: int, b: int
// Berechnet den groessten gemeinsamen Teiler von a und b
int ggT ( int a, int b );

#endif//GGT_H