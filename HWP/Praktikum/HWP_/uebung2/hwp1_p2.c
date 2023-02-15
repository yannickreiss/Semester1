/*  LV 1512 Hardwarenahe Programmierung I */
/* hwp1_p2.c */
/* The first not-so-simple C program */

/* This is defined in stdbool.h you can use it later */
#define false 0
#define true 1

/* global variables are automatically initialized to 0 if nothing is given */
unsigned char globvarA = 42; /* a global Variable */
unsigned char globvarB = 0; /* setting explicit =0 is clearer but redundant */

/* Function incrementValue() */
/* parameter inVal: to be returned increased by 1 */
/* returns: inVal+1 */
unsigned char incrementValue(unsigned char inVal)
{
//  inVal++;

  return ++inVal;
}

/* Function main() */
/* Start of the program */
int main(void) 
{
  unsigned char loopVal = 0; /* a local variable */

/* We use indirect addressing, like in assembler, with the variable memPlace.
   memPlace is a local "pointer" (= address) variable, pointing to memory
   location 0x010f (like the X register in hello_ardiuno.S).

   Literal pointer addresses like below should never! be used except you have
   good reason and you know exactly what you are doing. 

   In comparison, globvarA gets its address in the memory automatically chosen 
   safely by the compiler. 

   As you can see, to give an address as a number, even a cast (from 
   int to unsigned char *) is necessary to force the assignment. */
  unsigned char *memPlace = (unsigned char *)0x010F; /* pointer variable */

  globvarB = incrementValue(globvarA);

  /* Something similar to the loop in hello_aduino.S (first prg) */
  do
  {
    while(memPlace > (unsigned char *)0x0100)
    {
      *memPlace = loopVal; /* Same like indirect addressing */
      loopVal = incrementValue(loopVal);
      memPlace--;
    }
    
    memPlace = (unsigned char *)0x010F;
  } while (true); /* endless loop, think about the question "Why could this be usefull?" */

  return 0; /* actually, we will not reach this */
}

