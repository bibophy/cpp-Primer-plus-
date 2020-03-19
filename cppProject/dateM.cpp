//#include <iostream>
//using std::cout;
//#include "date.h"
//Date::Date(int m, int d, int y) { setDate(m, d, y); }
//int Date::getDay() { return day; }
//int Date::getMonth() { return month; }
//int Date::getYear() { return year; }
//void Date::setDay(int d)
//{
//    if (month == 2 && isLeapYear())
//        day = (d <= 29 && d >= 1) ? d : 1;   //？ ：  三目运算符
//    else
//        day = (d <= monthDays() && d >= 1) ? d : 1;
//}
//
//void Date::setMonth(int m)
//{
//    month = m <= 12 && m >= 1 ? m : 1;
//}
//
//void Date::setYear(int y)
//{
//    year = y <= 2010 && y >= 1900 ? y : 1900;
//}
//
//void Date::setDate(int mo, int dy, int yr)
//{
//    setMonth(mo);
//    setDay(dy);
//    setYear(yr);
//}
//
//void Date::print()
//{
//    cout << month << '-' << day << '-' << year << '\n';
//}
//
///* Write function nextDay here */
//
//void Date::nextday() {
//    if(day == monthDays()) {
//
//        if (month == 12) {
//
//            setYear(year + 1);
//
//        }
//
//        setMonth(month + 1);
//
//    }
//
//    setDay(day + 1);
//}
//
//bool Date::isLeapYear(void)
//{
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))  //闰年判断
//        return true;
//    else
//        return false;    // not a leap year
//}
//
//int Date::monthDays(void)
//{
//    const int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30,
//                             31, 30, 31 };
//
//    return month == 2 && isLeapYear() ? 29 : days[month - 1];
//}