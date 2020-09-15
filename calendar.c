#include <stdio.h>
#include <string.h>

int main()
{
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "Auguest", "September", "October", "Novrmber", "December"};
    // int length =  sizeof(month) /sizeof(char);

    // char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays;
    for (int i = 0; i < 12; i++)
    {
        printf("\n|------------------------%s-------------------|\n", month[i]);
        printf("\n");

        printf("Sun    Mon    Tue     Wed    Thu    Fri      Sat     \n");

        totalDays = days[i];
        for (int j = 1; j<=totalDays; j++)
        {
            printf("%5d", j);
            
        }
        printf("\n");
    }
}