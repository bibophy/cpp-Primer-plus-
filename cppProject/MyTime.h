//#pragma once
//#ifndef MYTIME_H_
//#define MYTIME_H_
//#include<iostream>
//class Time
//{
//	int minutes;
//	int hours;
//public:
//	Time() {
//		hours = minutes = 0;
//	}
//	Time(int h, int m)
//	{
//		hours = h;
//		minutes = m;
//	}
//	void AddMin(int m) {
//		minutes += m;
//		hours += minutes / 60;
//		minutes %= 60;
//	}
//	void AddHr(int h) {
//		hours += h;
//	}
//	void Resset(int h, int m) {
//		hours = h;
//		minutes = m;
//	}
//	Time operator+(const Time& t)const {
//		Time sum;
//		sum.minutes = minutes + t.minutes;
//		sum.hours = hours + t.hours + sum.minutes / 60;
//		sum.minutes %= 60;
//		return sum;
//	}
//	Time operator-(const Time& t)const {
//		Time diff;
//		int tot1, tot2;
//		tot1 = t.minutes + 60 * t.hours;
//		tot2 = minutes + 60 * hours;
//		diff.minutes = (tot2 - tot1) % 60;
//		diff.hours = (tot2 - tot1) / 60;
//		return diff;
//	}
//
//	void show() const {
//		std::cout << hours << "hours ," << minutes << "minutes";
//	}
//};
//#endif
