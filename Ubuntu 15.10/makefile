myBitApp: main.o bits.o
	gcc -lm -std=gnu99 main.o bits.o -o myBitApp

#main is independent of bits.c and bits.h
main.o: main.c
	gcc -std=gnu99 -c main.c

#if bits.c or bits.h is updated, rule to generate object bits.o
bits.o: bits.c bits.h 
	gcc -std=gnu99 -lm -c bits.c

clean:
	rm *.o myBitApp
