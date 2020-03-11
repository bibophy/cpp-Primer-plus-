//#include<iostream>
//struct inflatable {     //结构体
//	char name[20];
//	float volume;
//	double price;
//};
//int main() {
//	using namespace std;
//	inflatable* ps = new inflatable;      //创建一个inflatable类型，并将其地址赋给指针
//	cout << "Enter name of inflatable item:";
//	cin.get(ps->name, 20);   //方法一访问结构成员
//	cout << "Enter volume in cubic feet:";
//	cin >> (*ps).volume;    //方法二范文结构成员
//	cout << "Enter price: $";
//	cin >> ps->price;
//	cout << "Name:" << (*ps).name << endl;
//	cout << "Volume:" << ps->volume << endl;
//	cout << "Price: $" << ps->price << endl;
//
//	delete ps;
//	return 0;
//}