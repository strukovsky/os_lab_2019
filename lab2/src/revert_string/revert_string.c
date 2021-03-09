#include "revert_string.h"
#include "string.h"
#include "stdio.h"
void RevertString(char *str)
{
	int length = strlen(str) ;
    int half = length / 2;

    for(int i = 0; i < half; i++)
    {
        
        char first = str[i];
        char last = str[length-i-1];
      
        str[i] = last;
        str[length-i-1] = first;
    }
   

    
}

