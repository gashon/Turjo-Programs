#include <stdio.h>

int convert(int dd, int mm, int yy);

int main()
{
    int mm, dd, yy;
    int day_of_the_week;

    char *day[]= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    char *month[] = {"January", "February", "March", "April", "May", "June", "July",
                    "August", "September", "October", "November", "December" };

    while(1) {
        printf("\nEnter the date: \n");
        scanf("%d%*c", & dd);
        if(dd == 0) {
            break;
        }
        scanf("%d%*c%d", &mm, &yy);
        day_of_the_week = convert(dd, mm, yy);
        printf(" %s %s %d %d", day[day_of_the_week], month[mm-1], dd, yy);

    }

    return 0;
}

int convert(int dd, int mm, int yy)
{
    unsigned long ndays,ncycles,nyears, day;

    yy -= 1901;
    ndays = (long)(30.42*(mm - 1)) + dd;

    if(mm == 2) {
        ndays++;
    }
    if(mm > 2 && mm < 8) {
        ndays--;
    }
    if(yy % 4 == 0 && mm > 2) {
        ndays++;
    }

    ncycles = yy / 4;
    ndays += ncycles * 1461;

    nyears = yy % 4;
    if(nyears > 0 ) {
        ndays += 365 * nyears + 1;
    }
    /*if(ndays > 59) {
        ndays--;
    }*/

    day = ndays % 7;

    return day;
}
