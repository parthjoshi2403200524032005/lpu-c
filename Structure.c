// Structure in C

// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[100];
//     int roll;
//     float cgpa;
// };

// int main()
// {
//     struct student s1;
//     s1.roll = 1;
//     s1.cgpa = 3.5;
//     strcpy(s1.name, "Parth");
//     printf("%s\n", s1.name);
//     printf("%d\n", s1.roll);
//     printf("%f\n", s1.cgpa);

//     struct student s2 = {"Rohit", 2, 3.0};
//     printf("%s\n", s2.name);
//     printf("%d\n", s2.roll);
//     printf("%f\n", s2.cgpa);

//     struct student s3 = {"ritik", 3, 4.0};
//     printf("%s\n", s3.name);
//     printf("%d\n", s3.roll);

//     return 0;
// }

// pointer in structure

// #include <stdio.h>

// struct student
// {
//     char name[100];
//     int roll;
//     float cgpa;
// };

// int main(){
//     struct student s1 = {"Parth", 1, 3.5};
//     struct student *ptr = &s1;
//     printf("%s\n", (*ptr).name);
//     printf("%d\n", (*ptr).roll);
//     printf("%f\n", (*ptr).cgpa);
//     // Arrow operator
//     // printf("%s\n", ptr->name);
//     // printf("%d\n", ptr->roll);
//     // printf("%f\n", ptr->cgpa);
// }

// Passing structure in function

// #include <stdio.h>

// struct student
// {
//     char name[100];
//     int roll;
//     float cgpa;
// };

// void display(struct student s){
//     printf("%s\n", s.name);
//     printf("%d\n", s.roll);
//     printf("%f\n", s.cgpa);
// }

// int main(){
//     struct student s1 = {"Parth", 1, 3.5};
//     display(s1);
//     return 0;
// }

// Typedef in C

// #include <stdio.h>

// typedef struct student
// {
//     char name[100];
//     int roll;
//     float cgpa;
// } std;

// int main()
// {
//     std s1 = {"Parth", 1, 3.5};
//     printf("%s\n", s1.name);
//     printf("%d\n", s1.roll);
//     printf("%f\n", s1.cgpa);
//     return 0;
// }

// typedef in function with one example

// #include <stdio.h>

// struct address
// {
//     char city[100];
//     char state[100];
//     int house_no;
//     int block_no;
// };

// int main()
// {
//     struct address adds[5];
//     printf("Enter the first person :\n");
//     scanf("%s %s %d %d", adds[0].city, adds[0].state, &adds[0].house_no, &adds[0].block_no);
//     printf("Enter the second person :\n");
//     scanf("%s %s %d %d", adds[1].city, adds[1].state, &adds[1].house_no, &adds[1].block_no);
//     printf("Enter the third person :\n");
//     scanf("%s %s %d %d", adds[2].city, adds[2].state, &adds[2].house_no, &adds[2].block_no);

//     display(adds[0]);
//     display(adds[1]);
//     display(adds[2]);

//     return 0;
// }

// void display(struct address s)
// {
//     printf("%s %s %d %d\n", s.city, s.state, s.house_no, s.block_no);
// }

// File "r" handling in C

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     int ch;

//     fptr = fopen("test.txt", "r"); // open file in read mode
//    fscanf(fptr, "%d", &ch);
//    printf("%d", ch);
//    fscanf(fptr, "%d", &ch);
//    printf("%d", ch);
//    fscanf(fptr, "%d", &ch);
//    printf("%d", ch);
//    fclose(fptr);
//    return 0;

// }

// File "w" handling in C

// #include <stdio.h>

// int main(){
//     FILE *fptr;
//     int ch;
//     fptr = fopen("test.txt", "w");
//     fprintf(fptr, "%d", 10);
//     fprintf(fptr, "%d", 20);
//     fprintf(fptr, "%d", 30);
//     fclose(fptr);
// }

// File "a" handling in C

// #include <stdio.h>

// int main(){
//     FILE *fptr;
//     int ch;
//     fptr = fopen("test.txt", "a");
//     fprintf(fptr, "%d", 10);
//     fprintf(fptr, "%d", 20);
//     fprintf(fptr, "%d", 30);
//     fclose(fptr);

// }

// File "r" handling in C

// #include <stdio.h>

// int main(){
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));
//     fclose(fptr);
// }

// File "w" handling in C

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("test.txt", "w");
//     fputc('a', fptr);
//     fputc('b', fptr);
//     fputc('c', fptr);
//     fclose(fptr);
// }

// File eof handling in C

// #include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     char ch;
//     fptr = fopen("test.txt", "r");
//     ch = fgetc(fptr);
//     while (ch != EOF) // EOF means end of file
//     {
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }
//     fclose(fptr);
// }

// sizeof is used to find the size of data type in C.

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", sizeof(int));
//     printf("%d\n", sizeof(float));
//     printf("%d\n", sizeof(char));
//     return 0;
// }

// malloc is used to allocate memory dynamically in C.

// #include <stdio.h>
// #include <stdlib.h> // for malloc function.

// int main(){
//     int *ptr;
//     ptr = (int *)malloc(5 * sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;
//     for(int i=0;i<5;i++){
//         printf("%d\n", ptr[i]);
//     }
//     // printf("%d", *ptr);
//     // free(ptr);
//     return 0;
// }

// calloc is used to allocate memory dynamically in C.

// #include <stdio.h>
// #include <stdlib.h> // for calloc function.

// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(5, sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     printf("%d", ptr[0]);
//     // free(ptr);
//     return 0;
// }


// free is used to deallocate memory dynamically in C.

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(5, sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     free(ptr);

//     ptr = (int *)calloc(5, sizeof(int));
//     for(int i=0;i<5;i++){
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }

// realloc is used to reallocate memory dynamically in C.

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(5, sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
//     free(ptr);

//     ptr = (int *)realloc(ptr, 8* sizeof(int));
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d\n", ptr[i]); 
//     }
//     return 0;
// }