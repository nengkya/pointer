#include <stdio.h>
 
int main()
{
  int* var[] = { (int[]){1, 2}, (int[]){3, 4, 5} };
  int* ip;

  int a = var[0][0]; /*bener*/
  int b = var[0][1]; 
  int c = var[1][0];
  int d = var[1][1];

//int b = *((*var)+1)
//int b = *var = var[0]
//int b = *((*var) + 1) = var[0][1]
//int b = *(var[1])

  printf("b = %d \n", a);   /*kalo gada , b) --> warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat=]
		              yang di-print adalah alamat lokasi memori [%d]
                            */
  printf("b = %d \n", b);  
  printf("b = %d \n", c);  
  printf("b = %d \n", d);  

 /*
  int* vare[][] = { {1, 1}, {1, 1} }; //error
 */

 return 0;
}
