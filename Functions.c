// Difference between formatted and unformatted I/O functions
// Formatted I/O functions are used to read and write data in a specific format. Unformatted I/O functions are used to read and write data in a generic format.


// Formatted I/O functions
// #include <stdio.h>
//  int main(){
//      char ch;
//      printf("Enter a character: ");
//      scanf("%c", &ch);
//      printf("\nYou entered: ");
//      printf("%c", ch);
//      return 0;
//  }
// Unformatted I/O functions

// putch() function is used to display a character on the screen and getch() function is used to read a character without displaying it on the screen.

// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     ch = getch();
//     printf("\nYou entered: ");
//     putch(ch);

//     return 0;
// }

// getchar() function is used to read a character and putchar() function is used to display a character on the screen.

// #include <stdio.h>

// int main(){
//     char ch;
//     printf("Enter a character: ");
//     ch = getchar();
//     printf("\nYou entered: ");
//     putchar(ch);
//     return 0;
// }

// getche() function is used to read a character and display it on the screen. getch() function is used to read a character without displaying it on the screen.

// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     ch = getche();
//     printf("\nYou entered: ");
//     printf("%c", ch);
//     return 0;
// }


// gets function is used to read a string and puts function is used to display a string on the screen.

// #include <stdio.h>

// int main(){
//     char Name[100];
//     printf("Enter a Name: ");
//     gets(Name);
//     printf("Hello ");
//     puts(Name);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int aadhar[5];
//     // input
//     int *ptr = &aadhar[0];
//     for(int i=0;i<5;i++){
//         printf("%d index = ",i);
//         scanf("%d",ptr+i);
//     }
//     // output
//     for(int i=0;i<5;i++){
//         printf("%d index = %d\n",i,aadhar[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int aadhar[5]; 
    int *ptr = &aadhar[0];  

    for (int i = 0; i < 5; i++) {
        printf("%d index = ", i);
        scanf("%d", ptr + i); 
    }

 
    for (int i = 0; i < 5; i++) {
        printf("output : " );
        printf("%d index = %d\n", i, aadhar[i]);  
    }

    return 0;
}
