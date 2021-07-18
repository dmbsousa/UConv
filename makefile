all: UConv

ConversionFunctions.o: ConversionFunctions.c ConversionFunctions.h
	@gcc -c -ansi -pedantic -Wall  ConversionFunctions.c

Interface.o: Interface.c Interface.h
	@gcc -c -ansi -pedantic -Wall Interface.c

Formules.o: Formules.c Formules.h
	@gcc -c -ansi -pedantic -Wall Formules.c

main.o: main.c ConversionFunctions.h Interface.h Formules.h
	@gcc -c -ansi -pedantic -Wall main.c

UConv: main.o ConversionFunctions.o Interface.o Formules.o
	@gcc main.o ConversionFunctions.o Interface.o Formules.o -o UConv

clean:
	@del *.o

run:
	@UConv.exe