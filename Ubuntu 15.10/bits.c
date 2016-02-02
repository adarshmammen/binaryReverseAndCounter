#include "bits.h" 
#include <stdbool.h> 
#include <math.h>
#include <stdio.h>

int SequenceCount(unsigned long int integer)
{
  int c,k,count=0;
  bool flag1 = 0;
    //printf("%lu",integer[z]);
  for (c = 31; c >= 0; c--)
  {
    k = integer >> c;

    if (k & 1)
    { 
        //printf("1");
      flag1= true;

    }
    else
    {
        //printf("0");
      if(flag1 == true)
      {
        count = count +1;
        flag1 = false;
      }
      else
        flag1 = false;
    }
  }
    //printf("\n");
  return count;

}

unsigned long int BinaryMirror(unsigned long int integer)
{
  int c, k;
  bool binary[31];
  unsigned long int out = 0;

  for (c = 31; c >= 0; c--)
  {
    k = integer >> c;

    if (k & 1)
    { 
      //printf("1");
      binary[c] = true;


    }
    else
    {
      //printf("0");
      binary[c] = false;
    }
    }//printf("\n");

    for (c = 0; c <= 31; c++)
    {
      if (binary[c] & 1)
      {
        //printf("1");
        int q = 31 - c;
        out =  pow(2,q) + out;
      }

    }
    return out;
  }
