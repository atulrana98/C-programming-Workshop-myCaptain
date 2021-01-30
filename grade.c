#include <stdio.h>

int main()
{
    float marks;

    printf("Enter marks between 0 to 100 :");
    scanf("%f", &marks);


    if (marks >= 85)
    {
        printf("Grade A");
    }
    else if (marks >= 70)
    {
        printf("Grade B");
    }
    else if (marks >= 55)
    {
        printf("Grade C");
    }
    else if (marks >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
