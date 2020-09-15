#include <stdio.h>
#include <string.h>

int main()
{
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "Auguest", "September", "October", "Novrmber", "December"};
    // int length =  sizeof(month) /sizeof(char);

    // char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays, weekDay = 0, spaceCount = 0, year;

    printf("Enter a Year : \n");
    scanf("%d", &year);

    printf("\n\n  **************Welcome to %d ****************\n\n", year);

    if ((year%4==0 && year%100!=0)|| (year%400==0))
    {
        days[1]=29;
    }
    
    for (int i = 0; i < 12; i++)
    {
        printf("\n\n|--------------------%s-------------------|\n", month[i]);
        printf("\n");

        printf("   Sun   Mon   Tue    Wed   Thu   Fri   Sat \n");

        for (spaceCount = 1; spaceCount <= weekDay; spaceCount++)
        {
            printf("      ");
        }

        totalDays = days[i];
        for (int j = 1; j <= totalDays; j++)
        {
            printf("%5d ", j);
            weekDay++;

            if (weekDay > 6)
            {
                weekDay = 0;
                printf("\n");
            }
        }
        printf("\n");
    }
}