#include<stdio.h>
int main()
{
    int class_R,age_R,maths_R,science_R;
    int class_S,age_S,maths_S,science_S;

    printf("Enter class age marks in maths and marks in science of Ram: ");
    scanf("%d %d %d %d",&class_R,&age_R,&maths_R,&science_R);

    printf("Enter class age marks in maths and marks in science of Ram: ");
    scanf("%d %d %d %d",&class_S,&age_S,&maths_S,&science_S);

    if(class_R == class_S)
    printf("True\n");
    else
    printf("False\n");

    if(age_R<age_S)
    printf("True\n");
    else
    printf("False\n");

    if(maths_R>maths_S)
    printf("True");
    else
    printf("False\n");

    if(science_S>science_R)
    printf("True\n");
    else
    printf("False\n");

    return 0;
}