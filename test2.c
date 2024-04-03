// ternary operator

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age :");
//     scanf("%d", &age);
//     // if(age>=18){
//     //     printf("You are eligible to vote");
//     // }
//     // else{
//     //     printf("You are not eligible to vote");
//     // }
//     age >= 18 ? printf("You are eligible to vote") : printf("You are not eligible to vote");
//     return 0;
// }

// switch case

// #include <stdio.h>
// int main()
// {
//     char day;
//     printf("Enter the day :");
//     scanf("%c", &day);
//     printf("The day is :", day);
//     switch (day)
//     {
//     case 'm':
//         printf("Monday\n");
//         break;
//     case 't':
//         printf("Tuesday\n");
//         break;
//     case 'w':
//         printf("Wednesday\n");
//         break;
//     case 'T':
//         printf("Thursday\n");
//         break;
//     case 'f':
//         printf("Friday\n");
//         break;
//     case 's':
//         printf("Saturday\n");
//         break;
//     case 'S':
//         printf("Sunday\n");
//         break;

//     default: printf("Invalid day");

//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 2;

//  printf(" %d", i++); // use then increment
//  printf("\n %d", i);

// printf("%d", ++i); // increment then use
// printf("\n%d", i);

// printf("%d", i++ + ++i);

// printf("%d", i--); // use then decrement
// printf("\n%d", i);

// printf("%d", --i); // decrement then use
// printf("\n%d", i);

//     return 0;
// }

// for loop is used to repeat a block of code multiple times.

// #include <stdio.h>

// int main(){
//     int i;
//     for (i = 1; i <= 10; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// while loop is similar to for loop but it executes only when the condition is true.

// #include <stdio.h>

// int main(){
//     int i=1;
//     while (i<=5){
//         printf("Hello\n");
//         i++;
//     }
//     return 0;
// }

// do while loop is similar to while loop but it executes atleast once.
// #include <stdio.h>

// int main(){
//     int i=1;

//     do{
//         printf("Hello\n");
//         i++;
//     }
//     while(i<5);
//     return 0;
// };

// continue statement

// #include <stdio.h>

// int main()
// {
//     int i;
//     for (i = 5; i <= 50; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d\n", i);
//         }
//     }
// }

// factorial of a number

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: "); // we canot give big number like 50,100 etc.
//     scanf("%d", &n);
//     int fact = 1;
//     for (int i = 1; i <= n; i++){
//         fact = fact * i;
//     }
//     printf("Factorial of is %d", fact);
// }

// funtion

// #include <stdio.h>

// void fun();
// void add(); // function declaration

// int main()
// {
//     fun();
//     // add();

//     return 0;
// }
// void fun()
// {
//     int n;

//     for (n = 1; n <= 10; n++)
//     {
//         printf("\n Hello");
//         printf("\n World");
//     }
// }
// void add()
// {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     printf("Sum of a and b %d", a + b);
// }

// function with parameter

// #include <stdio.h>
// int sum(int a,int b);

// int main(){
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     printf("Sum of %d and %d is %d",a,b,sum(a,b));

//     return 0;
// }
// int sum(int a,int b){
//     return a+b;
// }

// function void printtable

// #include <stdio.h>

// void printable(int n);

// int main()
// {
//     printable(3);
//     return 0;
// }
// void printable(int n)
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", n * i);
//     }
// }

// function calculatePrice

// #include <stdio.h>

// int calculatePrice(float Price);

// int main(){
//     float Price ;
//     printf("Enter price: ");
//     scanf("%f",&Price);
//     calculatePrice(Price);
//     return 0;
// };

// int calculatePrice(float Price){
//      Price = Price + (Price*0.18); // GST 18% of price
//      printf("The price is %f",Price);
// };

// Math pow function used to calculate the square of a number

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     printf( "Square of %d is %f",n,pow(n,2));
//     return 0;
// }

// Math sqrt function used to calculate the square root of a number

// #include <stdio.h>
// #include <math.h>
// float SquareArea(float side);
// float circleArea(float radius);
// float RectangleArea(float length, float breadth);
// int main()
// {
//     float side, radius, length, breadth;
//     int choice;
//     printf("Enter 1 for Square Area\nEnter 2 for Circle Area\nEnter 3 for Rectangle Area\nEnter your choice: ");
//     scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:side = 4;
//         printf("Square Area is %f", SquareArea(side));
//         break;
//     case 2:radius = 5;
//         printf("Circle Area is %f", circleArea(radius));
//         break;
//     case 3:length = 5; breadth = 6;
//         printf("Rectangle Area is %f", RectangleArea(length, breadth));
//         break;
//     }
// }

// float SquareArea(float side)
// {
//     return side * side;
// }
// float circleArea(float radius)
// {
//     return 3.14 * radius * radius;
// }
// float RectangleArea(float length, float breadth)
// {
//     return length * breadth;
// }

// Recursion function to print hello world number of times

// #include <stdio.h>
// int PrintHW(int count);
// int main()
// {
//     int count = 5;
//     PrintHW(count);
//     return 0;
// }

// int PrintHW(int count){
//     if (count == 0)
//     {
//         return 0;
//     }
//     printf("Hello World\n");
//     PrintHW(count - 1);
//     return 0;
// }

// recursion function to find factorial of a number

// #include <stdio.h>

// int fact(int n);

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     printf("Factorial of %d is %d",n,fact(n));
//     return 0;
// }

// int fact(int n){
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);

// }

// celsius to fahrenheit conversion

// #include <stdio.h>

// int main(){
//     float c,f;
//     printf("Enter temperature in celsius: ");
//     scanf("%f",&c);
//     f = (c * 9/5) + 32;
//     printf("Temperature in fahrenheit is %f",f);
//     return 0;
// }

//  fahrenheit to celsius conversion

// #include <stdio.h>

// int main()
// {
//     float f, c;

//     printf("Enter temperature in fahrenheit: ");
//     scanf("%f", &f);
//     if (f == 0)
//     {
//         return 1;
//     };
//     c = (f - 32) * 5 / 9;
//     printf("Temperature in celsius is %f", c);
//     return 0;
// }
