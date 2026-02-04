//          // new file open karne ke liye 
#include<stdio.h>
int main () {
    FILE *fptr;
    fptr = fopen("NewTest.txt", "w");
    if(fptr==NULL) {
        printf("file does not exist \n");
    }
    else {
        printf("File opened successfully\n");
    fclose(fptr);
    }
    return 0;
}


////Test.txt mai se kuch bhi read karne ke liye.
// #include<stdio.h>
//  int main () {
//   FILE *fptr;
//    fptr = fopen("Test.txt", "r");
//    int ch;
//    fscanf(fptr, "%c", &ch);
//    printf("Cracter: %c \n", ch);
//    fscanf(fptr, "%c", &ch);
//    printf("Cracter: %c \n", ch);
//    fscanf(fptr, "%c", &ch);
//    printf("Cracter: %c \n", ch);
//    fscanf(fptr, "%c", &ch);
//    printf("Cracter: %c \n", ch);
//    fscanf(fptr, "%c", &ch);
//    printf("Cracter: %c \n", ch);
//    fclose(fptr);
//    return 0;
//  }


////Test.txt mai kuch bhi likhne ke liye.
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


//// Test.txt mai se kuch bhi read karne ke liye.  (EASY METHOD)
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


