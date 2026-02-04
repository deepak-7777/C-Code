// #include<stdio.h>
// #include<string.h>
// struct student {
// char name [100];
// int rollno;
// float cgpa;
// };
// int main () {
//     struct student s1;
//   s1.rollno= 121;
//   s1.cgpa=7.5;
//   strcpy(s1.name, "DEEPAk");
//    printf("name  %s \n",s1.name);
//     printf("roll no  %d \n", s1.rollno);
//      printf("cgpa  %f \n", s1.cgpa);
//     return 0;
// }

//// Write a program to store data of 3 students.
// #include<stdio.h>
// #include<string.h>
// struct student {
// char name [100];
// int rollno;
// float cgpa;
// };
// int main () {
//     struct student s1;
//   s1.rollno= 121;
//   s1.cgpa=7.5;
//   strcpy(s1.name, "DEEPAk");
//    printf("name  %s \n",s1.name);
//     printf("roll no  %d \n", s1.rollno);
//      printf("cgpa  %f \n", s1.cgpa);
//      struct student s2;
//   s2.rollno= 165;
//   s2.cgpa=8.5;
//   strcpy(s2.name, "PRAKASH");
//    printf("name  %s \n",s2.name);
//     printf("roll no  %d \n", s2.rollno);
//      printf("cgpa  %f \n", s2.cgpa);
//      struct student s3;
//   s3.rollno= 170;
//   s3.cgpa=9.5;
//   strcpy(s3.name, "AMAN");
//    printf("name  %s \n",s3.name);
//     printf("roll no  %d \n", s3.rollno);
//      printf("cgpa  %f \n", s3.cgpa);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// struct student {
// char name [100];
// int rollno;
// float cgpa;
// };
// int main () {
//     struct student ece[100];
//     ece[0].rollno=1231;
//     ece[0].cgpa=8.5;
//     strcpy(ece[0].name, "Deepak");
//     printf("name %s \n", ece[0].name);
//     printf("rollno %d \n", ece[0].rollno);
//     printf("cgpa  %f \n", ece[0].cgpa);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// struct address {
// char block [100];
// char city [50];
// char state [40];
// int houseno;
// };
// void address (struct address s1);
// void addre (struct address s2);
// void add (struct address s3);
// void addres (struct address s4);
// int main () {
//     struct address s1 = {"Raghunathpur", "Siwan", "bihar", 32};
//      struct address s2 = {"Raghu", "Noida", "UP", 35};
//       struct address s3 = {"Hawra", "Kolkata", "Bengol", 38};
//        struct address s4 = {"Ragh", "Ranchi", "Jharkhand", 39};
//         struct address s5 = {"Ra", "Si", "Assam", 30};
//      address(s1);
//     addre (s2);
//     add (s3);
//     addres (s4);
//     return 0;
// }
// void address (struct address s1) {
//      printf("Block:  %s \n", s1.block);
//      printf("City:  %s \n", s1.city);
//      printf("State:  %s \n", s1.state);
//      printf("House no:  %d \n", s1.houseno);
// }
// void addre (struct address s2) {
//       printf("Block:  %s \n", s2.block);
//      printf("City:  %s \n", s2.city);
//      printf("State:  %s \n", s2.state);
//      printf("House no:  %d \n", s2.houseno);
// }
// void add (struct address s3) {
//       printf("Block:  %s \n", s3.block);
//      printf("City:  %s \n", s3.city);
//      printf("State:  %s \n", s3.state);
//      printf("House no:  %d \n", s3.houseno);
// }
// void addres (struct address s4) {
//       printf("Block:  %s \n", s4.block);
//      printf("City:  %s \n", s4.city);
//      printf("State:  %s \n", s4.state);
//      printf("House no:  %d \n", s4.houseno);
// }


//  #include<stdio.h>
// #include<string.h>
// struct student {
// char name [100];
// int rollno;
// float cgpa;
// };
// int main () {
//     struct student s1 = {"Deepak", 125, 9.5};
//     printf("name  %s \n",s1.name);
//     printf("roll no  %d \n", s1.rollno);
//     printf("cgpa  %f \n", s1.cgpa);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// struct student {
// char name [100];
// int rollno;
// float cgpa;
// };
//  void printinfo (struct student s1);
// int main () {
//     struct student s1 = {"Deepak", 127, 9.5};
//     printinfo (s1);
//         return 0;
// }
//     void printinfo (struct student s1) {
//     printf("name  %s \n",s1.name);
//     printf("roll no  %d \n", s1.rollno);
//     printf("cgpa  %f \n", s1.cgpa);
//     }
//// create a structure to store vectors. then make a function to return sum of 2 factors.
// #include<stdio.h>
// #include<string.h>
// struct vector {
//     int x;
//     int y;
// };
// void calculatesum (struct vector v1, struct vector v2, struct vector sum);
// int main () {
//   struct vector v1 = {5, 10};
//   struct vector v2 = {3, 7};
//   struct vector sum = {0};
//  calculatesum(v1,v2,sum);
// return 0;
// }
// void calculatesum (struct vector v1, struct vector v2, struct vector sum) {
//     sum.x=v1.x+v2.x;
//     sum.y=v1.y+v2.y;

//     printf("sum of x is: %d \n", sum.x);
//      printf("sum of y is: %d \n", sum.y);
// }

//// create a structure to store complex number. (Use Arrow Operator)   
// #include<stdio.h>
// #include<string.h>
// struct complex {
//     int real;
//     int img;
// };
// int main () {
// struct complex number1 = { 777, 77};
// struct complex *ptr = &number1;
// printf("real part:  %d \n",ptr->real); 
// printf("img part:  %d \n",ptr->img);  
//   return 0;
// }

//// make a structure to store bank account infomation of a customer of ABC bank. Also, make a alias for it.    (use:- typedef)
//  #include<stdio.h>
// #include<string.h>
// typedef struct bankaccount {
//     int accountno;
//     char name [50];
//  }acc;
//  int main () {
//   acc acc1 = {2143, "DEEPAK"};
//   acc acc2 = {2156, "PRIYA"};
//   printf("acc no: %d \n", acc1.accountno);
//   printf("name: %s \n", acc1.name);
// printf("acc no: %d \n", acc2.accountno);
//   printf("name: %s \n", acc2.name);
//   return 0;
//  }



// new file read karne ke liye 
// #include<stdio.h>
// int main () {
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "r");
//     if(fptr==NULL) {
//         printf("file does not exist \n");
//     }
//     else {
//     fclose(fptr);
//     }
//     return 0;
// }

// new file open karne ke liye 
// #include<stdio.h>
// int main () {
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "w");
//     if(fptr==NULL) {
//         printf("file does not exist \n");
//     }
//     else {
//     fclose(fptr);
//     }
//     return 0;
// }

//// Test.txt mai se kuch bhi read karne ke liye.
// #include<stdio.h>
//  int main () {
//   FILE *fptr;
//    fptr = fopen("Test.txt", "r");
//    int n;
//    fscanf(fptr, "%d", &n);
//    printf("Cracter: %d \n", n);
//    fscanf(fptr, "%d", &n);
//    printf("Cracter: %d \n", n);
//    fscanf(fptr, "%d", &n);
//    printf("Cracter: %d \n", n);
//    fclose(fptr);
//    return 0;
//  }

// Test.txt mai kuch bhi likhne ke liye.
//  #include<stdio.h>
//  int main () {
//   FILE *fptr;
//   fptr = fopen("new.txt", "w");
//   fprintf(fptr, "%c", 'D');
//   fprintf(fptr, "%c", 'E');
//   fprintf(fptr, "%c", 'E');
//   fprintf(fptr, "%c", 'P');
//   fprintf(fptr, "%c", 'A');
//   fprintf(fptr, "%c", 'K');
//   fclose(fptr);
//   return 0;
//  }

// // Test.txt mai se kuch bhi read karne ke liye.  (EASY METHOD)
//  #include<stdio.h>
//  int main () {
//   FILE *fptr;
//   fptr = fopen("Test.txt", "r");
//   printf("%c \n", fgetc(fptr));
//   printf("%c \n", fgetc(fptr));
//   printf("%c \n", fgetc(fptr));
//   printf("%c \n", fgetc(fptr));
//   printf("%c \n", fgetc(fptr));
//   printf("%c \n", fgetc(fptr));
//   fclose(fptr);
//   return 0;
//  }

// Test.txt mai kuch bhi likhne ke liye.  (EASY METHOD)
//  #include<stdio.h>
//  int main () {
//   FILE *fptr;
//   fptr = fopen("Test.txt", "w");
//     fputc('M', fptr);
//     fputc('A', fptr);
//     fputc('N', fptr);
//     fputc('G', fptr);
//     fputc('O', fptr);
//    fclose(fptr);
//   return 0;
//  }

//// Test.txt mai se pura sentence read karne ke liye.
// #include<stdio.h>
// int main () {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");
//     char ch;
//     ch = fgetc(fptr);
//     while(ch != EOF) {
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }
//     printf("\n");
//     fclose(fptr);
// return 0;
// }

//// Make a programm to read 5 integers from a file.
// #include<stdio.h>
// int main () {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");
//        int n;
//    fscanf(fptr, "%d", &n);
//    printf("Cracter: %d \n", n);
//    fscanf(fptr, "%d", &n);
//    printf("Cracter: %d \n", n);
//    fscanf(fptr, "%d", &n);
//    printf("Cracter: %d \n", n);
//     fscanf(fptr, "%d", &n);
//    printf("Cracter: %d \n", n);
//    fscanf(fptr, "%d", &n);
//    printf("Cracter: %d \n", n);
//     fclose(fptr);
//     return 0;
//  }

//// Make a program to input store information from a user & enter it to a file. 
// #include<stdio.h>
// int main () {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "w");
//     char name[50];
//        int age;
//        float cgpa;
//        printf("Enter name");
//        scanf("%s", name);
//        printf("Enter age");
//        scanf("%d", &age);
//        printf("Enter cgpa");
//        scanf("%f", &cgpa);
//     fprintf(fptr, "%s \t", name);
//     fprintf(fptr, "%d \t", age);
//     fprintf(fptr, "%f \t", cgpa);
//     fclose(fptr);
//     return 0;
// }

// Write a program to write all the odd number 1 to n in a file.
// #include<stdio.h>
// int main () {
//     FILE *fptr;
//     fptr = fopen("odd.txt", "w");
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++) {
//         if(n % 2 != 0) {
//             fprintf(fptr,"%d\n", i);
//         }
//     }
//     fclose(fptr);
//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>
int main () {
    int *ptr;
    ptr = (int *) malloc(5* sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for(int i=0; i<5; i++){
    printf("%d \n", ptr[i]);
    }
    return 0;
}

//// Wap to allocate memory to store 5 prices.
//  #include<stdio.h>
// #include<stdlib.h>
// int main () {
//     float *ptr;
//     ptr = (float *) malloc(5* sizeof(float));
//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;
//     for(int i=0; i<5; i++){
//     printf("%f \n", ptr[i]);
//     }
//     return 0;
// }

//// Wap to allocate memory of size n, where n is the entered by the user.
//#include<stdio.h>
// #include<stdlib.h>
// int main () {
//    int *ptr;
//    int n;
//    printf("Enter n (1 to 5): ");
//    scanf("%d", &n);
//    ptr = (int*) calloc(n ,sizeof(int));
//    for(int i=0; i<5; i++){
//    printf("%d \n", ptr[i]);
//    }
//     return 0;
// }

//// free the memory allocated with calloc.
// #include<stdio.h>
// #include<stdlib.h>
// int main () {
//     int *ptr;
//     int n;
//     printf("Enter n (1 to 5): ");
//     scanf("%d", &n);
//     ptr = (int*) calloc(n ,sizeof(int));
//     for(int i=0; i<5; i++){
//     printf("%d \n", ptr[i]);
//     }
//     free(ptr);
//     ptr = (int*) calloc(2 ,sizeof(int));
//     for(int i=0; i<2; i++){
//     printf("%d \n", ptr[i]);
//     }
//     return 0;
// }

//// Allocate memory for 5 numbers. then dynamically increase it to 8 number.
// #include<stdio.h>
// #include<stdlib.h>
// int main () {
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));
//    printf("Enter number(5): ");
//    for(int i=0; i<5; i++) {
//     scanf("%d", &ptr[i]);
//    }
//     ptr = realloc(ptr,8);
//     printf("Enter number(8): ");
//    for(int i=0; i<8; i++) {
//     scanf("%d", &ptr[i]);
//    }
//    for(int i=0; i<8; i++) {
//     printf("number%d is %d \n", i, ptr[i]);
//    }
    
//     return 0;
// }

//// Allocate memory to store first 5 odd number, then reallocate it to store first 6 even number.
//  #include<stdio.h>
// #include<stdlib.h>
// int main () {
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;
//     for(int i=0; i<5; i++){
//     printf("%d \n", ptr[i]);
//     }
//     ptr = realloc(ptr,6);
//     ptr[0] = 2;
//     ptr[1] = 4;
//     ptr[2] = 6;
//     ptr[3] = 8;
//     ptr[4] = 10;
//     ptr[5] = 12;
//     for(int i=0; i<6; i++){
//     printf("%d \n", ptr[i]);
//     }
//     return 0;
// }
