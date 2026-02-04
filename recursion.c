//// Write a program in c to print Good morning using Recursion Function.
// #include<stdio.h>
// void greeting (int n);
// int main () {
//   int n;
//   printf("Enter number: ");
//   scanf("%d", &n);
//   greeting (n);
//     return 0;
// }
// void greeting (int n) {
//     if(n==0) return;
//     printf("Good morning \n");
//     greeting (n-1);
//     return;
// }


//// Write a program in c to print 1 to N in reverse number using Recursion function.
// #include<stdio.h>
// void decreasing (int n);
// int main () {
//   int n;
//   printf("Enter number: ");
//   scanf("%d", &n);
//   decreasing (n);
//     return 0;
// }
// void decreasing (int n) {
//     if(n==0) return;
//     printf("%d\n", n);
//     decreasing (n-1);
//     return;
// }


// Write a program in c to print 1 to N number using Recursion function.
// #include<stdio.h>
// void increasing (int x, int n);
// int main () {
//   int n;
//   printf("Enter number: ");
//   scanf("%d", &n);
//   increasing (1,n);
//     return 0;
// }
// void increasing (int x, int n) {
//    if(x>n) return;
//     printf("%d\n", x);
//     increasing (x+1,n);
//     return;
// }

/////////////////////  same question easy method.
// #include<stdio.h>
// void increasing (int n);
// int main () {
//   int n;
//   printf("Enter number: ");
//   scanf("%d", &n);
//   increasing (n);
//     return 0;
// }
// void increasing (int n) {
//     if(n==0) return; 
//     increasing (n-1);
//     printf("%d\n", n);
//     return;
// }



// #include<stdio.h>
// void decreasing (int n);
// int main () {
//   int n;
//   printf("Enter number: ");
//   scanf("%d", &n);
//   decreasing (n);
//     return 0;
// }
// void decreasing (int n) {
//     if(n==0) return; 
//     printf("%d\n", n);
//     decreasing (n-1);
//     printf("%d\n", n);
//     return;
// }


////  Write a program in c to print 1 to N number of sum, using Recursion function.
// #include<stdio.h>
// void sum (int n, int s);
// int main () {
//   int n;
//   printf("Enter number: ");
//   scanf("%d", &n);
//  sum (n,0);
//     return 0;
// }
// void sum (int n, int s) {
//     if(n==0) { 
//     printf("%d\n", s);
//     return;
// }
// sum(n-1, s+n);
// return;
// }


//// Make a functions which calculate 'a' raised to the power 'b' using recursion.
// #include<stdio.h>
// int power (int a, int b);
// int main () {
//   int a;
//   printf("Enter base: ");
//   scanf("%d", &a);
//    int b;
//   printf("Enter power: ");
//   scanf("%d", &b);
// int p= power(a,b);
// printf("%d Raised to the power %d is: %d", a,b,p);
//     return 0;
// }
//  int power (int a, int b) {
//     if(b==0) return 1;
//    int recans =a*power(a, b-1);
//     return recans;
// }


//// Write a funnction to calculate the nth fibonacci number using reaction.
// #include<stdio.h>
// int fibo(int n) {
//   if(n==1 || n==2) return 1;
//   int ans = fibo(n-1) + fibo(n-2);
//   return ans;
// }
// int main () {
//   int n;
//   printf("Enter number: ");
//   scanf("%d", &n);
// int x= fibo(n);
// printf("%d", x);
//     return 0;
//  }


//// POWER FUNCTION (Logarithmic).
// #include<stdio.h>
// int powerlog(int a, int b) {
//     if(b==0) return 1;
//    int x = powerlog(a, b/2);
//      if(b%2==0)
//           return x*x;
//    else 
//          return x*x*a;
// }
// int main () {
//   int a;
//   printf("Enter base: ");
//   scanf("%d", &a);
//    int b;
//   printf("Enter power: ");
//   scanf("%d", &b);
// int p= powerlog(a,b);
// printf("%d Raised to the power %d is: %d", a,b,p);
//     return 0;
// }
 

//// MAZE PATH ----->  (Down, Right).
// #include<stdio.h>

// int main () {
//   int n;
//   printf("Enter no of rows of the maze: ");
//   scanf("%d", &n);
//    int m;
//   printf("Enter no of coloums of the maze: ");
//   scanf("%d", &m);
// int no0fways =maze();
// printf("%d", no0fways);
//     return 0;
// }
 