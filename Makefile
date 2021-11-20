build: main.o onegin.o string.o
	gcc main.o onegin.o string.o -o Onegin.exe
	./Onegin.exe

main.o: main.c
	gcc -c main.c

onegin.o: onegin.c onegin.c
	gcc -c onegin.c

string.o: stringLibrary/string.c stringLibrary/string.h
	gcc -c stringLibrary/string.c

clean:
	del -f *.o
	del -f *.exe


