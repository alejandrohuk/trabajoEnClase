#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vec[5],*ptr,i;
   ptr =vec;
   for(i=0;i<5;i++)
   {

       *(ptr+i ) = (i+3);

   }
   for(i=0;i<5;i++){

    printf("%d", *(ptr+i ) );
   }
   return 0;
}
