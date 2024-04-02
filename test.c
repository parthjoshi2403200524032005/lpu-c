// #include <stdio.h>

// int main()
// {
//     float radius;
//     float area;
//     float perimeter;
//     scanf("%f", &radius);
//     scanf("%f", &area);
//     scanf("%f", &perimeter);

//     float a = ( radius* area * perimeter)/100;

//     printf("User has entered value %f", a);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a,s;
//     scanf("%d%d", &a, &s);
//     printf("a = %d b = %d", a, s);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter Dividend: ");
//     scanf("%d",&a);
//     printf("Enter Divisor: ");
//     scanf("%d",&b);
//    int q = a/b;
//    int r = a - b * q;
//    printf(" The Remainder When %d is divided by %d is : %d",a,b,r);
//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     char a = 'a';
//     printf("%c",a);

//     return 0;

// }

// #include<stdio.h>

//  int main()

// {
// int a;
// float b,sum;// variables or storage spaces
// printf("Enter value of a and b");
// scanf("%d%f",&a,&b);
// sum=a+b;// calculating the sum or addition
// printf("Sum of a and b: %f",sum);

// }

// #include<stdio.h>
// int main()
// {
// char a[100]="Lovely Professional University";
// printf("Enter text is: %s",a);
// }

// #include <stdio.h>

// int main() {
//     int x = 5;
//     int y = ++x; // Pre-increment: Increment x by 1, then assign the new value to y

//     printf("x: %d\n", x); // Output: 6
//     printf("y: %d\n", y); // Output: 6

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num = 5;

//     // Pre-Increment
//     int pre_increment = ++num;

//     // Post-Increment
//     int post_increment = num++;

//     // Pre-Decrement
//     int pre_decrement = --num;

//     // Post-Decrement
//     int post_decrement = num--;

//     printf("Pre-Increment: %d\n", pre_increment); // Output: Pre-Increment: 6
//     printf("Post-Increment: %d\n", post_increment); // Output: Post-Increment: 6
//     printf("Pre-Decrement: %d\n", pre_decrement); // Output: Pre-Decrement: 6
//     printf("Post-Decrement: %d\n", post_decrement); // Output: Post-Decrement: 6

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num1, num2, num3, num4;

//     printf("Enter values for num1, num2, num3 ,num4: \n");
//     scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

//     if (num1 > num2 && num1 > num3)
//         printf("num1 is greater\n");
//     else if (num2 > num1 && num2 > num3)
//         printf("num2 is greater\n");
//     else if (num3 > num1 && num3 > num2)
//         printf("num3 is greater\n");
//     else
//         printf("num4 is greater");

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 12, b = 25;
//     printf("Output = %d", a&b);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 12, b = 25;
//     printf("Output = %d", a|b);
//     return 0;
// }

// #include <stdio.h>
// #define pi 3.142
// int main()
// {
// float r,area;
// printf("Enter radius");
// scanf("%f",&r);
// area=pi*r*r;
// printf("Area of Circle is: %f",area);
// }

// #include<stdio.h>
// int main()
// {
// long double a ;//datatype is double
// printf("%d",sizeof(a));
// return 0;
// }

// #include<stdio.h>
// int main(){
// long double a;
// printf("%zu", sizeof(a));
// return 0;
// }

// #include <stdio.h>
// int main() {
//     unsigned int a = -10;
//     printf("%u", a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     printf(" What is the largest mammal: ");

//     printf("Select the correct answer:\n");
//     printf("a) Elephant\n");
//     printf("b) Lion\n");
//     printf("c) Whale\n");
//     printf("d) Giraffe\n");

//     char answer;
//     printf("Enter your choice (a, b, c, or d): ");
//     scanf(" %c", &answer);
//     if (answer == 'c')
//     {
//         printf("Correct! %c) Whale is the correct answer.\n", answer);
//     }
//     else
//     {
//         printf("Incorrect! The correct answer is c) Whale.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("What is the capital of France?\n");

//     printf("Select the correct answer:\n");
//     printf("a) Paris\n");
//     printf("b) Rome\n");
//     printf("c) Berlin\n");
//     printf("d) London\n");

//     char answer;
//     printf("Enter your choice (a, b, c, or d): ");
//     scanf(" %c", &answer);

//     if (answer == 'a') {
//         printf("Correct! %c) Paris is the correct answer.\n", answer);
//     } else {
//         printf("Incorrect! The correct answer is a) Paris.\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// void main()
// {
// int tiger,shark,whale,bluewhale;
// printf("which of the following is the largest mammal ");
// scanf("%d %d %d %d",&tiger,&shark,&whale,&bluewhale);
// if (bluewhale)

// {
// printf("your answer is correct");
// }
// else if(shark)
// {
// printf("wrong option selected");
// }
// else if (whale)
// {
// printf("wrong option selected");
// }
// else if (bluewhale)
// {
// printf("wrong option selected");
// }

// }

// #include <stdio.h>

// int main() {
//     char colorCode;

//     printf("Enter a color code : ");
//     scanf("%c", &colorCode);

//     switch(colorCode) {
//         case 'R':
//         case 'r':
//             printf("You selected Red.\n");
//             break;
//         case 'G':
//         case 'g':
//             printf("You selected Green.\n");
//             break;
//         case 'B':
//         case 'b':
//             printf("You selected Blue.\n");
//             break;
//         default:
//             printf("Invalid color code.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i,n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for (i = 1; i <= n; i++) {
//         printf("hlo %d\n", i);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, i;

//     printf("Enter a natural number: ");
//     scanf("%d", &n);

//     printf("Counting from 1 to %d:\n", n);
//     for (i = 0; i <= n; i++) {
//         printf("%d\n", i);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i = 0; // initialize the counter variable

//     // Loop through numbers 1 to 5 using a while loop
//     while (i <= 5) {
//         printf("%d\n", i); // print the current value of i
//         i++; // increment i by 1 for the next iteration
//     }

//     return 0;
// }

//  ODD NUMBERS 
// #include <stdio.h>

// int main()
// {
//     int num = 1;

//     printf("Odd numbers:\n");

//     while (num <= 20)
//     {
//         printf("%d\n", num);
//         num += 2;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num, max_num;
//     scanf("%d", &max_num);

//     printf("Odd numbers:\n");

//     num = 1; // start with the first odd number

//     while (num <= max_num)
//     {
//         printf("%d\n", num);
//         num += 2; // increment by 2 to get the next odd number
//     }

//     return 0;
// }


// #include <stdio.h>
// int main()
//  {
//     int num, i = 1, factorial = 1;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
    
//     do {
//         factorial *= i;
//         i++;
//     } while (i <= num);
    
//     printf("Factorial of %d = %d\n", num, factorial);
    
//     return 0;
// }

// #include <stdio.h>  
  
// int main(void) {  
//   int n,m;  
//   printf("Enter the number");  
//   scanf("%d",&n);  
//   m=2*n-1;  
//   for(int i=1;i<=m;i++)  
//   {  
//     for(int j=1;j<=m;j++)  
//     {  
//        if(i==j || j==(m-i+1))  
//        {  
//          printf("*");  
//        }  
//        else  
//        {  
//          printf(" ");  
//        }  
//     }  
//     printf("\n");  
//   }  
//   return 0;  
// }  


// #include <stdio.h>

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {6, 7, 8, 9, 10};
//     int sum[5]; 
    

//     for (int i = 0; i < 5; i++) {
//         sum[i] = arr1[i] + arr2[i];
//     }
    
  
//     printf("Sum of arrays: ");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", sum[i]);
//     }
//     printf("\n");
    
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
// char name[20];
// puts("Enter your name");
// gets(name);// user will enter data with gets
// puts(name);// this function will print data
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int rows,i,j,k,l,s;
//     printf("Enter number of rows : ");
//     scanf("%d",&rows);
//     for(i=1;i<=rows;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf(" ");
//         }
//         for(k=1;k<=rows-i+1;k++)
//         {
//             printf(" * ");
//         }
//         for(l=1;l<=i;l++)
//         {
//             printf(" ");
//         }
//         for(s=1;s<=i;s++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }




//   #include <stdio.h>

// int main() {
//     int rows;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (int i = 0; i < 2 * rows - 1; i++) {
//         int comp;
//         if (i < rows) {
//             comp = 2 * i + 1;
//         } else {
//             comp = 2 * (2 * rows - i) - 3;
//         }

//         for (int j = 0; j < comp; j++) {
//             printf(" ");
//         }

//         for (int k = 0; k < 2 * rows - comp; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>

// int main() {
//     int num1, num2, sum;

//     // Input the two numbers
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     // Calculate the sum
//     sum = num1 * num2;

//     // Display the result
//     printf("The sum of %d and %d is %d\n", num1, num2, sum);

//     return 0;
// }

// 123456



// #include <stdio.h>

// int main() {
//     int x = 5;
//     int y = 10;

//     // Using || (logical OR)
//     if (x > 3 || y < 5) {
//         printf("At least one condition is true\n");
//     } else {
//         printf("Both conditions are false\n");
//     }

//     // Using && (logical AND)
//     if (x > 3 && y < 5) {
//         printf("Both conditions are true\n");
//     } else {
//         printf("At least one condition is false\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
// float pi,area,r;
// printf("Enter radius: ");
// scanf("%d",r);
// pi=3.14;
// area=pi*r*r;
// printf("The area of the circle is: %f",&area);
// return 0;
// }

// #include <stdio.h>

// int main() {
//     float pi, area, r;

//     printf("Enter radius: ");
//     scanf("%f", &r);

//     pi = 3.14;
//     area = pi * r * r;

//     printf("The area of the circle is: %f\n", area); 
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int number;
// printf("enter number :");
// scanf("%d",&number);
// if(number%2==0){
//     printf("even number");
// }
// else{
//     printf("odd number");
// }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // leap years
//     int number;

//     printf("Enter a year: ");
//     scanf("%d", &number);
//     if (number % 4 == 0) {
       
//         printf("%d is a leap year.\n", number);
//     }
//     else {
//         printf("%d is not a leap year.\n", number);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("nn\n\nnn\n");
// }

