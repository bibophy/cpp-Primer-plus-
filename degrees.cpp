//#include<iostream>
//
//using namespace std;
//int main(void) {
//	int degrees, minutes, seconds;
//
//	cout << "Enter a latitude in degrees,mminutes and seconds:"<<endl;
//	cout << "First,enter the degrees:"; cin >> degrees;
//	cout << "Next,enter the minutes:"; cin >> minutes;
//	cout << "Finally,enter the seconds:"; cin >> seconds;
//	double x, y;
//	x = double(minutes) / 60;               //强制转换成double进行运算，确保精度
//	y = double(seconds) / 3600;
//
//	cout << degrees << "degrees , " << int(minutes) << "minutes , " << int(seconds) << "seconds = " << double(degrees) + x + y << " degrees ";
//	
//	return 0;
//}