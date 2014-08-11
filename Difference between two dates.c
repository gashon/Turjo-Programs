#include<stdio.h>

int main()
{
    int cd_day,cd_month,cd_year;
    int bd_day,bd_month,bd_year;
    int d3;
    long int d1,d2;
    cd_day=14,cd_month=7,cd_year=2014;
    bd_day=20,bd_month=7,bd_year=2003;
    d1=cd_day+cd_month*30+cd_year*365;
    d2=bd_day+bd_month*30+bd_year*365;
    printf("%d %d",d1,d2);
    printf("\n");
    d3=d1-d2;
    printf("%d %d %d",d3/365,(d3%365)/30,(d3%365)%30);



}
