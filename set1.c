// write a program to check given number lie between 50 and 150.
#include <stdio.h>
int main() {
   int n;
   printf("Enter the number: ");
   scanf("%d", &n);
   
   if(n>50 && n<150) {
       printf(" Right ");
   }
   else  {
       printf("Wrong");
   }
    return 0;
}


// // write a C program to find the sum of average of three numbers.
// #include<stdio.h>
// int main () {
//     int a, b, c;
//     printf("Enter a: ");
//     scanf("%d", &a);

//     printf("Enter b: ");
//     scanf("%d", &b);

//     printf("Enter c: ");
//     scanf("%d", &c);

//     int sum= a+b+c;
//     int average=(a+b+c)/3;

//     printf("sum of: %d", sum);
//     printf("Average of: %d", average);
//     return 0;
// }


//// Write a program to swap the value of two variables with and without using the third variables. 
// #include<stdio.h>
// int main () {
//     float a, b;
//     printf("Enter a: ");
//     scanf("%f",&a);

//      printf("Enter b: ");
//     scanf("%f",&b);

//     a=a-b;
//     b=a+b;
//     a=b-a;

//     printf("After swapping a : %f \n",  a);
//     printf("After swapping b : %f \n", b);
//     return 0;
// }


// // Write a Program to read radius value from the keyboard and calculate the area of circle and print the result in both floating and exponential notation.
// #include <stdio.h>
// #include <math.h>

// int main() {
//     float radius, area;

//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);
  
//     area = 3.14 * radius * radius;

//     printf("Area of the circle in floating-point notation: %f \n", area);
//     printf("Area of the circle in exponential notation: %e \n", area);
//     return 0;
// }


//// Write a program to find whether the given year is a leap year or not leap year.
// #include<stdio.h>
// int main () {
//     int year;
//     printf("Enter year: ");
//     scanf("%d", &year);

//     if(year%400==0 ||year%4==0 && year%100!=0) {
//         printf("Leap Year");
//     }
//     else {
//         printf("Not Leap Year");
//     }
//     return 0;
// }


//// Write a program that checks whether the two numbers entered by the user are equal or not equal. 
// #include<stdio.h>
// int main () {
//     int a, b;
//     printf("Enter a: ");
//     scanf("%d", &a);

//      printf("Enter b: ");
//      scanf("%d", &b);

//       if(a==b) {
//         printf("Equal");
//       }
//       else {
//         printf("Not Equal");
//       }
//     return 0;
// }


//// Write a program to find the greatest of three numbers. 
// #include<stdio.h>
// int main () {
//     int a, b, c;     // num1=a, num2=b, num3=c
//     printf("Enter a: ");
//     scanf("%d", &a);

//     printf("Enter b: ");
//     scanf("%d", &b);

//     printf("Enter c: ");
//     scanf("%d", &c);

//     int greatest;
//     if(a>=b && a>=c) {
//         greatest=a;
//     }
//     else if(b>=a && b>=c) {
//         greatest=b;
//     }
//     else {
//         greatest=c;
//     }
//     printf("The Greatest No Is: %d \n", greatest);
//     return 0;
// }


//// Write a program that finds whether a given number is even or odd number. 	
// #include<stdio.h>
// int main () {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     if(n%2==0) {
//         printf("Even number");
//     }
//     else {
//         printf("Odd number");
//     }
//     return 0;
// }


//// Write a program that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
//// Between 90-100%-----Print ‘A’ 
//// 80-90%-----------------Print ‘B’ 
//// 60-80%-----------------Print ‘C’ 
//// Below 60%-------------Print ‘D’ 	
// #include <stdio.h>
// int main() {
//     float marks[5];
//     float total = 0.0, percentage;
//     char grade;

//     printf("Enter marks for five subjects:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Subject %d: ", i + 1);
//         scanf("%f", &marks[i]);
//         total += marks[i]; 
//     }
//     percentage = (total / 500) * 100;

//     if (percentage >= 90 && percentage <= 100) {
//         grade = 'A';
//     } else if (percentage >= 80) {
//         grade = 'B';
//     } else if (percentage >= 60) {
//         grade = 'C';
//     } else {
//         grade = 'D';
//     }
//     printf("Total Marks: %.2f\n", total);
//     printf("Percentage: %.2f%%\n", percentage);
//     printf("Grade: %c\n", grade);
//     return 0;
// }


// // Write a program to print the sum of all numbers up to a given number. 
// #include<stdio.h>
// int main () {
//     int n, sum=0;
//     printf("Enter number: ");
//     scanf("%d", &n );
//     if(n<1) {
//      printf("Enter the number: ");
//     }
//     for(int i=1; i<=n; i++) {
//         sum+=i;
//     }
//     printf("The sum of all number: %d",sum);
//  return 0;
// }


//// Write a program to find the factorial of a given number.
// #include<stdio.h>
// int main () {
//     int n, fact=1;
//     printf("Enter number: ");
//     scanf("%d", &n);
//    // for(int i=1; i<=n; i++) {
//       //  fact=fact*n;
//    // }
//    while(n>=1) {
//     fact=fact*n;
//     n--;
//    }
//     printf("Factorial of: %d", fact);
//    return 0;
// }


//// Write a program to print sum of even and odd numbers from 1 to N numbers. 
// #include<stdio.h>
// int main () {
//     int n, sum_even=0, sum_odd=0;
//     printf("Enter positive number: ");
//     scanf("%d", &n );

//   for(int i=1; i<=n; i++) {
//     if (i%2==0) {
//          sum_even+=i;}
//     else {
//         sum_odd+=i;
//     }
//   }
//     printf("Sum of even numbers from 1 to %d is: %d\n", n, sum_even);
//     printf("Sum of odd numbers from 1 to %d is: %d\n", n, sum_odd);
//     return 0;
// }


//// Write a program to print the Fibonacci series. 	
// #include <stdio.h>
// int main() {
//     int n, first = 0, second = 1, next;
//     printf("Enter the number of Fibonacci series: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         if (i <= 1) {
//             next = i; 
//         } else {
//             next = first + second; 
//             first = second;      
//             second = next;    
//         }
//        printf("%d \t", next); 
//     }
//     printf("\n");
//     return 0;
// }


//// Write a program to check whether the entered number is prime or not using function.
// #include <stdio.h>
// int main() {
//     int i,n,count=0;
//     while(1) {
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++){ 
//     if(n%i==0) {
//         count++;
//     }
// }
// if(count==2) {
// printf("prime number \n");
// } 
// else {
//     printf("not a prime number \n");
// }
//     }
//     return 0;
// }


//// Write a program to find the reverse of a number.	(1 to N)
// #include<stdio.h>
// int main () {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1, j=n; i<=n && j>=1; i++, j--) {
//         printf("%d \n", j);
//     }
//     return 0;
// }


//// Write a program to find the reverse of a number using a function. 
// #include<stdio.h>
// void reversenum(int n);
// int main () {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//    reversenum(n);
//     return 0;
// }
// void reversenum (int n) { 
//     for(int i=1, j=n; i<=n && j>=1; i++, j--) {
//         printf("%d \n", j);
//     }
// }


//// Write a program to print Armstrong numbers from 1 to 100 using a function.	
// #include <stdio.h>
// #include <math.h>
// int isArmstrong(int number) {
//     int sum = 0, originalNumber, remainder, digits = 0;
//     originalNumber = number;
//     while (originalNumber != 0) {
//         originalNumber /= 10;
//         digits++;
//     }
//     originalNumber = number;
//     while (originalNumber != 0) {
//         remainder = originalNumber % 10;
//         sum += pow(remainder, digits);
//         originalNumber /= 10;
//     }
//     return sum == number;
// }
// void printArmstrongNumbers(int start, int end) {
//     for (int i = start; i <= end; i++) {
//         if (isArmstrong(i)) {
//             printf("%d ", i);
//         }
//     }
// }
// int main() {
//     printf("Armstrong numbers from 1 to 100 are: ");
//     printArmstrongNumbers(1, 100);
//     printf("\n");
//     return 0;
// }

    
    //// Write a recursive function to print the factorial of a given number.	
// #include<stdio.h>
// void recursivenumber(int n);
// int main () {
//     int n;
//     printf("Enter positive number: ");
//     scanf("%d", &n);
//   recursivenumber(n);
//     return 0;
// }
// void recursivenumber(int n) {
//     int fact = 1;
//     for(int i=1; i<=n; i++) 
//         fact = fact * i;
//         printf("%d", fact);
// }


//// Write a program that simply takes elements of the array from the user and finds the sum of these elements using function.
// #include <stdio.h>
// int calculateSum(int arr[], int size);
// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n]; 
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     int sum = calculateSum(arr, n);
//     printf("The sum of the array elements is: %d\n", sum);
//     return 0;
// }
// int calculateSum(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }


//// Write a program that inputs two arrays and saves the sum of corresponding elements of these arrays in a third array and prints them.
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements in the arrays: ");
//     scanf("%d", &n);
//     int array1[n], array2[n], sumArray[n];
//     printf("Enter elements for the first array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &array1[i]);
//     }
//     printf("Enter elements for the second array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &array2[i]);
//     }
//     for (int i = 0; i < n; i++) {
//         sumArray[i] = array1[i] + array2[i];
//     }
//     printf("Sum of corresponding elements:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: %d\n", i + 1, sumArray[i]);
//     }
//     return 0;
// }


////  Write a program to find the minimum and maximum element of the array. 
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     int min = arr[0];
//     int max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     printf("Minimum element: %d\n", min);
//     printf("Maximum element: %d\n", max);
//     return 0;
// }


//// Write a program to search an element in an array using Linear Search. 	
// #include <stdio.h>
// int linearSearch(int arr[], int size, int target);
// int main() {
//     int n, target;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n]; 
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search for: ");
//     scanf("%d", &target);
//     int result = linearSearch(arr, n, target);
//     if (result != -1) {
//         printf("Element %d found at index %d.\n", target, result);
//     } else {
//         printf("Element %d not found in the array.\n", target);
//     }
//     return 0;
// }
// int linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             return i;
//         }
//     }
//     return -1; 
// }


//// Write a program to sort the elements of the array in ascending order using Bubble Sort technique. 	
// #include <stdio.h>
// void bubbleSort(int arr[], int size) ;
// void printArray(int arr[], int size) ;
// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n]; 
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     bubbleSort(arr, n);
//     printf("Sorted array in ascending order:\n");
//     printArray(arr, n);
//     return 0;
// }
// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j + 1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }


//// Write a program to add and multiply two matrices of order n x n. 
// #include <stdio.h>
// #define MAX_SIZE 10 
// void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             result[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }
// }
// void multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             result[i][j] = 0; 
//             for (int k = 0; k < n; k++) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }
// void printMatrix(int mat[MAX_SIZE][MAX_SIZE], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main() {
//     int n;
//     int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE], product[MAX_SIZE][MAX_SIZE];
//     printf("Enter the order of the matrices (n x n): ");
//     scanf("%d", &n);
//     printf("Enter elements of the first matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("Element [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &mat1[i][j]);
//         }
//     }
//     printf("Enter elements of the second matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("Element [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//     addMatrices(mat1, mat2, sum, n);
//     multiplyMatrices(mat1, mat2, product, n);
//     printf("Sum of the matrices:\n");
//     printMatrix(sum, n);
//     printf("Product of the matrices:\n");
//     printMatrix(product, n);
//     return 0;
// }


//// Write a program that finds the sum of diagonal elements of a m x n matrix. 	
// #include <stdio.h>
// int main() {
//     int m, n;
//     printf("Enter the number of rows (m): ");
//     scanf("%d", &m);
//     printf("Enter the number of columns (n): ");
//     scanf("%d", &n);
//     int matrix[m][n];
//     printf("Enter elements of the matrix (%dx%d):\n", m, n);
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("Element [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     int sum = 0;
//     if (m == n) { 
//         for (int i = 0; i < m; i++) {
//             sum += matrix[i][i]; 
//         }
//         printf("Sum of diagonal elements: %d\n", sum);
//     } else {
//         printf("The matrix is not square, diagonal sum is not defined.\n");
//     }
//     return 0;
// }


//// Write a program to implement strlen (), strcat (),strcpy () using the concept of Functions.   
// #include <stdio.h>
// int myStrlen(const char *str);
// void myStrcat(char *dest, const char *src);
// void myStrcpy(char *dest, const char *src);
// int main() {
//     char str1[100], str2[100];
//     printf("Enter the first string: ");
//     fgets(str1, sizeof(str1), stdin);
//     str1[myStrlen(str1) - 1] = '\0'; 
//     printf("Enter the second string: ");
//     fgets(str2, sizeof(str2), stdin);
//     str2[myStrlen(str2) - 1] = '\0'; 
//     int length = myStrlen(str1);
//     printf("Length of the first string: %d\n", length);
//     myStrcat(str1, str2);
//     printf("Concatenated string: %s\n", str1);
//     myStrcpy(str1, str2);
//     printf("Copied string (from str2 to str1): %s\n", str1);
//     return 0;
// }
// int myStrlen(const char *str) {
//     int length = 0;
//     while (str[length] != '\0') {
//         length++;
//     }
//     return length;
// }
// void myStrcat(char *dest, const char *src) {
//     while (*dest != '\0') {
//         dest++;
//     }
//     while (*src != '\0') {
//         *dest = *src;
//         dest++;
//         src++;
//     }
//     *dest = '\0'; 
// }
// void myStrcpy(char *dest, const char *src) {
//     while (*src != '\0') {
//         *dest = *src;
//         dest++;
//         src++;
//     }
//     *dest = '\0'; 
// }	


//// Write a program to swap two elements using the concept of pointers. (using function)
// #include <stdio.h>
// void swap(int *a, int *b);
// int main() {
//     int x, y;
//     printf("Enter x: ");
//     scanf("%d", &x);
//     printf("Enter y: ");
//     scanf("%d", &y);
//    swap(&x, &y);
//     printf("After swapping: x = %d, y = %d\n", x, y);
//     return 0;
// }
// void swap(int *a, int *b) {
//     int temp = *a; 
//     *a = *b;     
//     *b = temp;   
// }


//// Write a program to print in c number to word (0-9999) convert.
// #include <stdio.h>
// #include <string.h>
// void convertToWords(int num);
// const char *ones[] = {
//     "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
//     "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
//     "Seventeen", "Eighteen", "Nineteen"
// };
// const char *tens[] = {
//     "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
// };
// const char *thousands[] = {
//     "", "Thousand"
// };
// void convertToWords(int num) {
//     if (num == 0) {
//         printf("Zero");
//         return;
//     }
//     if (num >= 1000) {
//         printf("%s %s ", ones[num / 1000], thousands[1]);
//         num %= 1000;
//     }
//     if (num >= 100) {
//         printf("%s Hundred ", ones[num / 100]);
//         num %= 100;
//     }
//     if (num >= 20) {
//         printf("%s ", tens[num / 10]);
//         num %= 10;
//     }
//     if (num > 0) {
//         printf("%s", ones[num]);
//     }
// }
// int main() {
//     int number;
//     printf("Enter a number (0-9999): ");
//     scanf("%d", &number);
//     if (number < 0 || number > 9999) {
//         printf("Please enter a number between 0 and 9999.\n");
//     } else {
//         printf("The number in words is: ");
//         convertToWords(number);
//         printf("\n");
//     }
//     return 0;
// }


