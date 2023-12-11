#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char name[20];
    fptr=fopen("sample.txt","w");
    printf("File created succesfully\n");

    putc('A',fptr);
    putc('W',fptr);
    putc('E',fptr);
    putc('S',fptr);
    putc('O',fptr);
    putc('M',fptr);
    putc('E',fptr);
    printf("Data entered succesfully\n");

    fclose(fptr);


    fptr=fopen(name,"a");

    printf("%c",getc(fptr));
    printf("%c",getc(fptr));
    printf("%c",getc(fptr));
    printf("%c",getc(fptr));
    printf("%c",getc(fptr));
    printf("%c",getc(fptr));
    printf("%c",getc(fptr));

    fclose(fptr);
    return 0;
}