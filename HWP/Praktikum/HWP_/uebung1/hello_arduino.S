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

        ;; Load r16 with 1
        ldi r16,0b00000001


        ;; Load r26 with 15. As you can see, numbers can be given in 
        ;; binary, hex and decimal: 0b00001111, 0x0f and 15
        ldi r26,0x0f

        ;; Chained together, r26 and r27 make up the 16-Bit register X (= 0x010f)

        ;; loop: is a jump label, marking a spot your program could jump to.
        ;; The place where the location is is marked with the name and a colon.
loop:
        ;; find out what these do (which English words start with inc.. and dec..?)
        inc r16
	inc r16
        dec r26

        ;; This is a branch instuction (= jump to another program location).
        ;; Here, we jump to r26positive (note there is no colon used here)
        ;; ...but we jump only if the previous operation's result was 
        ;; "pl", meaning plus (positive).
        brpl r26positive

        ;; If we did actually perform the branch before, this instruction will be skipped.
        ldi r26,15

        ;; We always end up here, if we branched or not
r26positive:

        ;; Store the value of r16 in the memory location whose address is in X
        ;; This is an "indirect" memory access
        ;; Note: X is r26:r27 (16 bits glued together)
        st  X,r16

        ;; now jump back to the loop: label (unconditionally, i.e. in any case)
        rjmp loop


