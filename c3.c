// #include <stdio.h>

// int main() {
    
//    int side;
//    printf("enter side");
//    scanf("%d",&side);

//    printf("area is%d",side *side);

//     return 0;
// }


// #include<stdio.h>
// int main () {

//      int n;
//      printf("enter the number");
//      scanf("%d", &n);

//     int sum = 0;
//     for( int i=1; i<=n; i++) {
//        sum = sum+i;
//     }
//     printf("%d \n", sum );
    
   
//     return 0;
// }



// #include<stdio.h>
// int main () {
//       int num;
//    printf("Enter a number: ");
//    scanf("%d", &num);
   
//    if( num>=0) {
//        printf("Positive Number");
//    }
//    else  {
//        printf("Negative Number");
//    }
  
//     return 0;
// }


// #include<stdio.h>

// void dowork (int a, int b, int *sum, int *product, int *average);

// int main () {
// int a=3, b= 5;
// int sum, product, average;
// dowork (a,b, &sum, &product, &average);

// printf("sum= %d,average=%d,product=%d \n", sum , product, average );
//     return 0;
// }

// void dowork (int a, int b, int *sum, int *product, int *average) {
//     *sum=a+b;
//     *product=a*b;
//     *average=(a+b)/2;
// }


// #include<stdio.h>

// void printstring (char arr []);

// int main () {
//      char  firstname[] ="Deepak";
//      char lastname[] = "Kumar";

//      printstring(firstname);
//      printstring(lastname);

//     return 0;
// }
//     void printstring (char arr []) {
//        for (int i=0; arr[i] != '\0'; i++) {
//        printf("%c", arr[i]);
//    }
//     printf("\n");
//     }


// #include<stdio.h>
// #include<string.h>

// void printstring (char arr[]);
// void countlength (char arr[]);

// int main() {
//    char oldstr[]="oldstring";
//     char newstr[]="newstring";
//    strcpy(newstr, oldstr);
//   // printf("newstring");
//    puts(newstr);

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// void printstring (char arr[]);
// void countlength (char arr[]);

// int main() {
//    char firststr[50]="hello";
//     char secondstr[50]="world";
//    strcat(firststr, secondstr);
//  //  printf("enterstring");
//    puts(firststr);

//     return 0;
// }


// #include <stdio.h>
// #include<string.h>

// void printstring(int arr[]);
// void countlength(int arr[]);

// int main() {
//   char firststring[] = "Apple";
//   char secondstring[] = "Banana";
//   //printf("%d", strcmp(secondstring,firststring));
//    printf("%d", strcmp(firststring,secondstring));

//     return 0;
// }


// // space count karne ke liye 
// #include <stdio.h>
// #include<string.h>

// int main() {
//     char str[100];
//      char ch;
//      int i=0;
     
//      while(ch != '\n') {
//          scanf("%c", &ch);
//          str[i]=ch;
//          i++;
//      }
//      str[i] = '\0';
//      puts(str);

//     return 0;
// }


// // password mai kuch bhi add karne ke liye  
// #include <stdio.h>
// #include<string.h>

// void salting(char password[]);

// int main() {
//     char password[100];
//      scanf("%s", password);
//      salting(password);
//     return 0;
// }

// void salting(char password[]) {
//     char salt[] = "123";
//     char newpassword[200];
    
//     strcpy(newpassword,password);
//     strcat(newpassword,salt);
//     puts(newpassword);
// }




