// #include<stdio.h>
// int main () {
//     int year;
//     printf("Enter the year");
//     scanf("%d", &year);

//     if (year%400==0 || year%4==0 && year%100!=0) {
//         printf("leap year");
//     }

//         else {
//             printf("not leap year");
//         }
    
//     return 0;
// }


// #include<stdio.h>
// int main () {
//     int n;
//     printf("enter the number");
//     scanf("%d \n", &n);

//     for(int i=1; i<=10; i++) {
//         printf("%d /n", i*n);
//     }

//      return 0;
// }


// #include<stdio.h>
// int main () {
// int n;
// printf("Enter the number: ");
// scanf("%d",&n);

//  //for(int i=2; i*i<=n; i++) {
//    //  (n % i == 0) ;
//  //}
//   int i;
// if(n%i==0) {
//     printf("prime factor");
// }
// else {
//     printf("not prime factor");
// }
//     return 0;
// }


                          ////    Convert  Number to Roman .
// #include <stdio.h>
// #include<string.h>
// void intToRoman(int num) {
// int values[]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//     char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
//     for (int i = 0; i < 13; i++) {
//         for (; num >= values[i]; num -= values[i]) {
//             printf("%s", symbols[i]);
//         }
//     }
// }
// int main() {
//     int number;
//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     printf("Roman numeral: ");
//     intToRoman(number);
//     return 0;
// }


                    /////  find number of vowel in your name.  
// #include<stdio.h>
// int main () {
//     char name [] = "Deepak Kumar";
//     int vowel_count = 0;
//     for(int i=0; name[i] != '\0'; i++) {
//         if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U') {
//             vowel_count++;
//         }
//     }
//     printf("Number of vowel in your name: %d \n",vowel_count);
//     return 0;
// }

                                    //   Tower Of Hanoi
#include <stdio.h>
void hanoi(int n, char from, char to, char via) {
   if(n == 1){
      printf("Move disk 1 from %c to %c\n", from, to);
   }
   else{
      hanoi(n-1, from, via, to);
      printf("Move disk %d from %c to %c\n", n, from, to);
      hanoi(n-1, via, to, from);
   }
}
int main() {
   int n = 4;
   char from = 'A';
   char to = 'B';
   char via = 'C';
   hanoi(n, from, via, to);
}