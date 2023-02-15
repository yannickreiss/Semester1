;;  LV 1512 Hardwarenahe Programmierung I
;; hello_arduino.S
;; 

;; Semicolons start a comment, meaning that everything in the line after the semicolon is 
;; just descriptive text, which is technically ignored by the compiler and assembler.

;; This tells avr-gcc/avr-as which type of processor the code should be compiled for.
;; Instead of the #define below, you could use -mmcu=atmega16 as an avr-gcc option
#define __AVR_ATmega16__


        ;; program code (and not data) follows
        .section .text          

        ;; Announces main: (two lines later) to be a global address marker, could be 
        ;; jumped to from other parts of the program.
        ;; Later also the entry point for C main().
        .global main

        ;; Here comes the first code in .text secion, so we start here 
main:
        ;; Load some registers with constant values
        LDS R15, 0x2000
        LDI R17, 0x01
        EOR R17, R15
        STS 0x2001, R17
        