//#include<iostream>
//#include<cstring>
//#pragma warning(disable:4996)
//using namespace std;
//char* getname(void);   //作用原型
//
//int main() 
//{
//	char* name;
//	name = getname();
//	cout << name << " at " << (int*)name<<endl;
//	delete [] name;
//
//	name = getname();               //释放指向name的内存后，可以再次调用
//	cout << name << " at " << (int*)name << endl;
//	delete [] name;
//	return 0;
//}
//char * getname()   //返回一个输入字符串的指针
//{
//	char name[80];
//	cout << "Enter the last name:";
//	cin >> name;
//	char* pn = new char[strlen(name) + 1];
//	strcpy(pn, name);
//	return pn;
//}