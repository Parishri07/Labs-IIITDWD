#include<stdio.h>

struct book
{
  char title[10];
  char author[10];
  int year;
} b[2];

void add_book()
{
  struct book b[2];
  printf("Enter title, author and year: ");
  scanf("%s %s %d",&b[2].title,&b[2].author,&b[2].year);
}

void display_book()
{
  for(int i=0;i<3;i++)
   printf("%s %s %d\n",b[i].title,b[i].author,b[i].year);
}

int main()
{
    FILE *fp;
    fp=fopen("books.txt","w");
    if(fp != NULL)
    {
       printf("Enter the title, author and year of the 2 books: \n");
       for(int i=0;i<2;i++)
        scanf("%s %s %d",&b[i].title,&b[i].author,&b[i].year);
    }
    char c;
    printf("a:to enter a new book \n e:exit program :- ");
    scanf("%c",&c);
    switch(c)
    {
      case 'a':
      add_book();
      break;
      case 'e':
      display_book(b);
      break;
    }
    fclose(fp);
    return 0;
}