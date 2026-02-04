#include<stdio.h>
int main () {
  float a,b,c,d,e;
  printf ("enter obtained number in 5 Subjects");
  scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
   float sum=a+b+c+d+e;
    
    printf ("marks : %f\n" ,sum);
   printf ("percentage of : %f " , sum/5 );
}


// #include<stdio.h>
// int main () {
//   int j;
//   printf("enter number :");
//   scanf("%d", &j);

//   for(int i=1; i<=10; i++) 
//   {
//     printf("%d \n", j*i);
//   }
// }

// #include<stdio.h>
// int main() {
   
//         int numrows ;
//   printf("enter the total number of rows");
//   scanf("%d" , &numrows);
//   // i=row
//   int i,j,k;
//   for(i=1; i <=numrows; i++)
//   {
//     // j=coloums
//     for(int j=numrows-i; j>=i; j--)
//     {
//       printf("");
//     }
//       for(k=1; k<=(i*2)-1; k++) {
//         printf("*");
//       }
    
//   printf("\n");
//     }
    
//     return 0;
// }
    
// #include<stdio.h>
// int main () {
//     int age=22;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%d", _age);
    
//     return 0;
// }


// #include<stdio.h>
// int main () {
//     int marks [3];
//     printf("enter physics: ");
//     scanf("%d",&marks[0]);
//     printf("enter maths: ");
//     scanf("%d",&marks[1]);
//     printf("enter C lang: ");
//     scanf("%d",&marks[2]);
//     printf("phy=%d \tmaths=%d \tC lang=%d \t", marks[0],marks[1],marks[2]);
//     return 0;
// }


// #include<stdio.h>
// int main () {
// float price [3];
// printf("enter 3 prices");
// scanf("%f", &price[0]);
// scanf("%f", &price[1]);
// scanf("%f", &price[2]);
// printf("Total price %f \n", price[0]+(0.18*price[0]));
// printf("Total price %f \n", price[1]+(0.18*price[1]));
// printf("Total price %f \n", price[2]+(0.18*price[2]));
//     return 0;
// }


// #include<stdio.h>
// void printnumbers(int arr[], int n);
// int main () {
//     int arr[] ={1,2,3,4,5,6};
//     printnumbers(arr, 6);
//     return 0;
// }
// void printnumbers(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }


// chech odd number using array
// #include<stdio.h>
// int countodd (int arr[], int n);
// int main (){
//     int arr [] = {1,2,3,4,5,6};
//     printf("%d", countodd (arr,6));
//     return 0;
// }
// int countodd (int arr[], int n) {
//     int count = 0;
//     for (int i=0; i<n; i++) {
//         if (arr[i]%2 !=0) {
//             count++;
//         }
//     }
//     return count;
// }


// #include<stdio.h>
// int main () {
//    int n;
//    printf("enter number");
//    scanf("%d", &n);
//   int fib [n];
//    fib[0]=0;
//    fib[1]=1;
//    for(int i=2; i<n; i++) {
//     fib[i]= fib[i-1]+fib[i-2];
//     printf("%d \t", fib[i]);
//    }
//    printf("\n");
//     return 0;
// }

















