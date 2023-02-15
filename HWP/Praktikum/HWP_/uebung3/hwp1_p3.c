/*  LV 1512 Hardwarenahe Programmierung I */
/* hwp1_p3.c */
/* Simulated AVR I/O, main program  */


/* Function outpuDigit() 
 *
 * Prints a single digit representing the input parameter number 
 * If an illegal value is passed, the characte X ist printed.
 *
 * parameter number: must be a value from 0..9 
 */
void outputDigit(char number)
{
  volatile unsigned char *outputRegisterAddress = (unsigned char*)0x20;
  unsigned char outputCharacter = 'X';

  // check if the value is in the range of single digit values
  if ((number >= 0) && (number <= 9))
    // if so, make a matching ASCII value (digits start at ASCII 48, or '0')
    outputCharacter = (unsigned char)('0' + number);

  // actual output of the character
  *outputRegisterAddress = outputCharacter;
}

void putC ( char character )
{
  volatile unsigned char *addressOut = (unsigned char*)0x20;
  *addressOut = character;
}

/* Function main() */
/* Start of the program */
int main(void) 
{
  for (int i = 0; i < 10; ++i)
    putC(i);
  return 0;
}