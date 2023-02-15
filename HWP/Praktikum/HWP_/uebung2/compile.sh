avr-gcc -o object.o -c -g -mmcu=atmega16 -O0 -Wall simple.c
avr-gcc -o simple -g -mmcu=atmega16 object.o
rm object.o
