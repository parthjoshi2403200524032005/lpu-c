//  // Pointers
//  #include <stdio.h>

//  int main() {
//      int age = 10;
//      int *ptr = &age;
    
//      printf("%p \n", ptr);
//      printf("%u", ptr);
//      return 0;  
//  }

// Pointers to pointers

// #include <stdio.h>
// int main(){
//     int a=10;
//     int *ptr=&a;
//     int **ptr2=&ptr;
//     printf("%d",**ptr2);
//     return 0;
// }

// swope function

// #include <stdio.h>
// int swap(int *a,int *b);
// int main(){
//     int a=10,b=20;
//     int *c;
//     c=&a;
//     swap(c,&b);
//     printf("a= %d b= %d",a,b);
//     return 0;
// }

// int swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// find the largest number in two numbers

// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two numbers :");
//     scanf("%d%d",&a,&b);
//     if(a>b){
//         printf("a is greater");
//     }
//     else{
//         printf("b is greater");
//     }
//     return 0;
// }


// Pointers
// #include <stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("%u \n",ptr);
//     ptr++;
//     printf("%u \n",ptr);
//     ptr--;
//     printf("%d \n",ptr);
//     return 0;
// }
