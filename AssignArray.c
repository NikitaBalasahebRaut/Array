//Application for Assigning an array to another array
//assigning an array to another array

#include<stdio.h>
int main()
{
 int arr[3];
 int brr[3] = {10,20,30};
 int i = 0;
 
 printf("Assigning an array to another array\n");
 for(i = 0;i < brr[i]; i++)
 {
   arr[i] = brr[i];
 }
 printf("%d\n%d\n%d\n",arr[0],arr[1],arr[2]);
 
 return 0;
 }