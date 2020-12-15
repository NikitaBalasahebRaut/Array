//Assigning a pointer to a void pointer

#include<stdio.h>
int main()
{
int no = 12;
int *iptr = &no;
void *vptr = iptr;  //vptr is not going to hold adress of iptr ,//assigning pointer iptr to vptr
printf("int* is implicitly converted to void *");

return 0;
}