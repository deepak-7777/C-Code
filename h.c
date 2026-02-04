// #include<stdio.h>
// int main()
// {
//  int x=4;
// int y,z;
//  y = --x;
//  z = x--;
//  printf("%d %d %d \n",x,y,z); 
//  return 0;
// }
// #include <stdio.h>

// int main() {
// int arr[5];
// for(int i=0;i<4; i++) {
//     printf("Enter element number %d:\n",i+1);
// scanf("%d",&arr[i]);
// }
// for(int i=4;i>0;i--) {
// printf("%d",arr[i]);
// }
//     return 0;
// }

#include <stdio.h>
int main() {
   int marks[10];
for(int i=0; i<=9; i++) {
printf("Enter marks student number %d :",i+1);
scanf("%d",&marks[i]);
}
       for(int i=0;i<=9;i++) {
       if(marks[i]<35) {
       printf("%d",i);
  }
}
    return 0;
}