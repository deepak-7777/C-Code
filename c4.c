// #include<stdio.h>

//     void namste();
//     void bonjur();

//     int main () {
//   printf("enter f for french & i for indian");
//   char ch;
//   scanf("%c", &ch);

//   if(ch == "i") {
//     namste();
//   }
//   else {
//     bonjur ();
//   }
// return 0;
//     }

//   void namste() {
//     printf("indian \n");
//   }
//   void bonjur () {
//     printf("bonjur \n");
//   }
  

  // #include<stdio.h>
  // int main () {
  //   printf("Hello World");
  //   return 0;
  // }

//   #include<stdio.h>
//   #include<math.h>

//   float squarearea (float side);
//   float circlearea (float radius);
//   float rectanglearea (float a, float b);

//   int main () {
//     int a=5;
//     int b=10;

//     printf("Area is: %f \n",rectanglearea (a,b) );
//   }


//   float squarearea (float side) {
//     return side * side;
//   }
//    float circlearea (float radius) {
//     return 3.14 * radius * radius;
//   }
//  float rectanglearea (float a, float b) {
//     return a * b;
//   }

// #include<stdio.h>
//int sum (int a, int b);
// int main () {
//   int a,b;
//   printf("enter first number: ");
//   scanf("%d", &a);
//    printf("enter second  number: ");
//   scanf("%d", &b);
//   int s = sum(a,b);
//   printf("sum of: %d", s);
//   return 0;
// }
// int sum (int a, int b){
//   return a+b;
// }

// #include<stdio.h>
// int  sum (int a, int b);
// void printtable (int n);
// int main () {
//   int n;
//   printf("Enter n");
//   scanf("%d", &n);

//   printtable (n);

//   return 0;
// }
// int  sum (int a, int b){
//   return a+b;
// }

// void printtable (int n) {
//    for(int i=1; i<=10; i++) {
//     printf("%d \n ", i*n);
//    }
// }

// #include <stdio.h>
// int main () {
//     int marks;
//     printf("enter marks (0-100)");
//     scanf("%d" , &marks);

//     if (marks>30) {
//       printf("True");
//     }

//     else if (marks<=30) 
//         printf("False");
    
//  }

// #include<stdio.h>
// int main () {
//     int n;
//     do {
//         printf("enter number :");
//         scanf("%d", &n);
//          printf("%d \n", n);
       
//         if(n % 7==0) {
//             break;
//         }
//     }
//     while(1);
//     printf("Thanks");

//     return 0;
// }

// #include<stdio.h>
// int main() {
    
//     for( int i=5; i<=50; i++ ) {
//         if(i % 2 != 0){
//         printf("%d \n", i);}
//     }
// }


// #include<stdio.h>
// int main () {
//     int a,b;

//     printf("enter a :");
//     scanf("%d", &a);

//     printf("enter b :");
//     scanf("%d", &b);

//     int sum = a+b;
//     printf("sum of Number : %d", a+b);
// }

// #include<stdio.h>
// void namaste ();
// void bonjur ();

// int main () {
//     printf("enter i for indian & f for french: ");
//    char ch;
//    scanf("%c", &ch);
//    if(ch=='i') {
//        printf("namaste");
//    }
//    else  {
//    bonjur();
//    }
//     return 0;
// }
// void namaste() {
    
//     printf("Namaste \n");
   
// }
// void bonjur(){
    
//  printf("bonjur");
// }


// #include<stdio.h>
// int calcpercantage (int math, int english, int science);

// int main () {
//  int math = 70;
// int science = 75;
//  int english = 70;

//  printf("percantage is %d", calcpercantage(math, english,science));
//     return 0;
// }
// int calcpercantage (int math, int english, int science) {
//     return ((math+english+science)/3 ) * 100;
// }



