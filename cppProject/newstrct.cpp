//#include<iostream>
//struct inflatable {     //�ṹ��
//	char name[20];
//	float volume;
//	double price;
//};
//int main() {
//	using namespace std;
//	inflatable* ps = new inflatable;      //����һ��inflatable���ͣ��������ַ����ָ��
//	cout << "Enter name of inflatable item:";
//	cin.get(ps->name, 20);   //����һ���ʽṹ��Ա
//	cout << "Enter volume in cubic feet:";
//	cin >> (*ps).volume;    //���������Ľṹ��Ա
//	cout << "Enter price: $";
//	cin >> ps->price;
//	cout << "Name:" << (*ps).name << endl;
//	cout << "Volume:" << ps->volume << endl;
//	cout << "Price: $" << ps->price << endl;
//
//	delete ps;
//	return 0;
//}