#include <stdio.h>
#include <stdbool.h> 
#include <math.h>

#include "bits.h"

unsigned long integer[100]; //array to store text data
unsigned long int integer2[100];
int count[100];
void read_text (const char* file_name)
{
  unsigned long int i = 0; 
  int j = 0;
  

  FILE* file = fopen (file_name, "r");
   
  while (!feof (file))
  {  

    fscanf (file, "%lu", &i); 
    integer[j] = i;
    j++;   
  }

  fclose (file);        
}

void write_text (const char* output_file)
{
  FILE* file = fopen(output_file,"w+");
  for(int i = 0; i<=100; i++)
  {
    if(integer2[i] == 0)
      break;

    fprintf(file, "|%lu|\t\t|%d|\n", integer2[i],count[i]);
  }
}

int main(int argc,char *argv[])
{
  read_text(argv[1]);

  for (int q = 0; integer[q]!=0; q++)
  {
  count[q] = SequenceCount(integer[q]);
  integer2[q] = BinaryMirror(integer[q]);
  }

  write_text(argv[2]);
}