This C program functionally takes an unsigned long integer array from a text file and

-----> Reverses the bits of all the numbers in the array and converts it back into unsigned long int
-----> Counts the number of '10' occurances in the original array of integers
-----> Writes both the outputs on a text file

How to run this code:
1) Downlaod the zip file and extract it.
2) Navigate into the folder using terminal and type 'make'
3) Type ./myBitApp <input.txt> <output.txt> (can be arbitrary)
eg: ./myBitApp Integer.txt Output.txt

main.c contains code to read and write to a text file
bits.c contains code to manupilate the data from the text file
bits.h is the header file