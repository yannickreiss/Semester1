NAME		=	simple
COMPILER	=	avr-gcc
CFLAGS		=	-c -Wall -O0
TARGET		=	atmega16
HEADER		=	
SOURCE		=	$(NAME).c
OBJECT		=	$(NAME).o

$(NAME):
	$(COMPILER) -o $(NAME).o $(CFLAGS) -g -mmcu=$(TARGET) $(SOURCE) && $(COMPILER) -o $(NAME) -mmcu=$(TARGET) -g $(OBJECT)

clean:
	rm *.o; rm simple

