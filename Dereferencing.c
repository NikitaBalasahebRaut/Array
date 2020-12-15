//Dereferencing pinter

#include<stdio.h>
int main()
{
 int value = 12;
 int *iptr = &value;
 int **pptr = &iptr;
 
 printf("value is :%d \n",value);
 printf("value by derefering iptr is  :%d \n",*iptr);
 printf("value by derefering pptr is  :%d \n",**pptr);
  printf("value of iptr is  :%d \n",iptr);
 printf("value of pptr is  :%d \n",pptr);

 return 0;
 }
 
 /*output
 value is :12
value by derefering iptr is  :12
value by derefering pptr is  :12
value of iptr is  :6422296
value of pptr is  :6422292
*/