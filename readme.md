This C program functionally takes an unsigned long integer array from a text file and<br />
<br />
-----> Reverses the bits of all the numbers in the array and converts it back into unsigned long int<br />
-----> Counts the number of '10' occurances in the original array of integers<br />
-----> Writes both the outputs on a text file <br />
<br />
How to run this code:<br />
1) Downlaod the zip file and extract it.<br />
2) Navigate into the folder using terminal and type 'make'<br />
3) Type ./myBitApp <input.txt> <output.txt> (can be arbitrary)<br />
eg: ./myBitApp Integer.txt Output.txt<br />
<br />
main.c contains code to read and write to a text file<br />
bits.c contains code to manupilate the data from the text file<br />
bits.h is the header file<br />