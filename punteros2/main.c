#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vec[5],*ptr,i;
   ptr =vec;
   for(i=0;i<5;i++)
   {
       vec[i]= (i+2);


   }
   for(i=0;i<5;i++){
    printf("%d", vec[i]);
   }
   return 0;
}
