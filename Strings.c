
// String functions

// #include <stdio.h>

// int main()
// {
//     // Two Ways
//     // char Name[] = {'P', 'a', 'r', 't', 'h', '\0'};
//     char Name[] = "Parth";

//     printf("%s", Name);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     char FullName[100];
//     printf("Enter your full name: ");
//     scanf("%s", FullName);
//     printf("Hello %s", FullName);
//     return 0;

// }

// String fgets() function is used to read a string and puts function is used to display a string on the screen.

// #include <stdio.h>
// void main()
// {
//     char Name[100];
//     fgets(Name, 100, stdin);
//     puts(Name);
// }

// array String cannot be changed
// #include <stdio.h>

// int main(){
//     char Name[] = "Parth";
//     Name[6] = "Rohit";
//     printf("%s", Name);
//     return 0;
// }

// Pointer String can be changed

// #include <stdio.h>

// int main()
// {
//     char *Name = "Parth";
//     puts(Name);
//     Name = "Rohit";
//     puts(Name);
//     return 0;
// }

// count the length of string

// #include <stdio.h>

// int main()
// {
//     char Name[] = "Parth";
//     int index = 0;
//     for(index = 0; Name[index] != '\0'; index++);
//     printf("%d", index);
//     return 0;
// }

// Count the length of string with strlen() function.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char Name[] = "Parth";
//     printf("%d", strlen(Name));
//     return 0;
// }

// copy string with strcpy() function.

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char Name[] = "Parth";
//     char Name2[] = "Rohit";
//     strcpy(Name2, Name);
//     printf("%s", Name2);
//     return 0;

// }

// concatenate string with strcat() function.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char Name[] = "Parth ";
//     char Name2[] = "Rohit";
//     strcat(Name, Name2);
//     printf("%s", Name);
//     return 0;
// }

// string compare with strcmp() function.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char Name[] = "Parth Joshi";
//     char Name2[] = "Parth Joshi";
//     printf("%d", strcmp(Name, Name2)); // if both string are same then return 0 and if not same then return 1 or -1
//     return 0;
// }

// Salting String with strcat() and strcpy() function

// #include <stdio.h>
// #include <string.h>

// void Salting(char Password[]);

// int main()
// {
//     char Password[100];
//     printf("Enter your password: ");
//     scanf("%s", Password);
//     Salting(Password);
//     return 0;
// }

// void Salting(char Password[])
// {
//     char Salting[] = "123";
//     char Temp[100];
//     strcpy(Temp, Password);
//     strcat(Password, Salting);
//     puts(Password);
// }

// slice string with substr() function

// #include <stdio.h>
// #include <string.h>

// // Function to extract a substring from a string
// void substr(const char *src, int start, int len, char *dest) {
//     strncpy(dest, src + start, len);
//     dest[len] = '\0'; // Null-terminate the destination string
// }

// int main(){
//     char Name[] = "Parth";
//     char substring[10];

//     substr(Name, 0, 2, substring);
//     printf("%s", substring);

//     return 0;
// }

// print vowel from string

// #include <stdio.h>

// int main(){
//     char Name[] = "Parth Joshi";
//     for(int i=0; Name[i] != '\0'; i++){
//         if(Name[i] == 'a' || Name[i] == 'e' || Name[i] == 'i' || Name[i] == 'o' || Name[i] == 'u'){
//             printf("%c ", Name[i]);
//         }
//     }
//     return 0;
// }

// Check char is present in string

// #include <stdio.h>

// int main()
// {
//     char Name[] = "Parth";
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     for (int i = 0; Name[i] != '\0'; i++)
//     {
//         if (Name[i] == ch)
//         {
//             printf("Yes\n");
//             return 0;
//         }
//     }
//     printf("No\n");
//     return 0;
// }
