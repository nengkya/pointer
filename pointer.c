#include <stdio.h>

int main()
{
   int  var = 20;   /*actual variable declaration */
   int* ip;         /*pointer variable declaration*/

   ip = &var;       /*store address of var in pointer variable*/

   printf("Address of var variable               : %p \n", &var);

   /*address stored in pointer variable*/
   printf("Address stored in int* ip variable    : %p \n",   ip);

   /*access the value using the pointer*/
   printf("Dereference value of int* ip variable : %d \n",  *ip);

   return 0;
}
