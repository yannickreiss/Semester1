# Makefile
# Yannick Reiss
# Build-Instruktionen für das Programm ggttest
APP		=	ggttest
CC		=	gcc
FLAGS	=	-Wall -g
INLCUDE	=	ggt.h
OBJECTS	=	ggt.o ggttest.o

# App wird aus allen Objektdateien erstellt
$(APP): $(OBJECTS)
	$(CC) $(FLAGS) -o $(APP) $(OBJECTS)

# Erstellung von Objektdateien aus alle Quelldateien
%.o: %.c $(INCLUDE)
		$(CC) $(FLAGS) -c -o $@ $<

# Baut ggf. die App und fuehrt diese dann aus
run: $(APP)
	./$(APP)&

# loescht alle Objektdateien und die Anwendung
clean:
	rm *.o $(APP)

# Damit run und clear auch funktionieren, wenn Dateien mit dem gleichen Namen erstellt werden
.PHONY: run
.PHONY: clean