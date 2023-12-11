#include<stdio.h>
int main()
{
    int marks;
 
    printf("Enter your marks obtained: ");
    scanf("%d",&marks);

    if(marks>=0 && marks<=100)
    {
      if(marks>=90)
       printf("Grade:-A");
      
      else if(marks>=70)
       printf("Grade:-B");

      else if(marks>=50)
        printf("Grade:-C");
    
      else if(marks>35)
       printf("Grade:-D"); 
      
      else
       printf("Failed,study harder!");
    }
    return 0;
}