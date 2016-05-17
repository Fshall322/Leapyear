#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int dayOfWeek(int, int, int);
bool isLeapYear(int);

using namespace std;

int main(int argc, char** argv) {

    dayOfWeek(int year, int month, int day);

    switch(dayWeek){
        case 0 :
            cout<<"The day of the week is Sunday"<<endl;
            break;
        case 1 :
            cout<<"The day of the week is Monday"<<endl;
            break;
        case 2 :
            cout<<"The day of the week is Tuesday"<<endl;
            break;
        case 3 :
            cout<<"The day of the week is Wednesday"<<endl;
            break;
        case 4 :
            cout<<"The day of the week is Thursday"<<endl;
            break;
        case 5:
            cout<<"The day of the week is Friday"<<endl;
            break;
        case 6 :
            cout<<"The day of the week is Saturday"<<endl;
            break;
    }
    return 0;
}

int dayOfWeek(int year, int month, int day)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= mmonth < 3;
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;// gives me an integer from 0-6, 0 sunday, 1 =  monday excetra
}

bool isLeapYear(int year)
{
    /* Check if the year is divisible by 4 or 
    is divisible by 400 */
    return ((year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0));
}