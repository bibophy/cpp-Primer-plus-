//#include<iostream>
//#include<cstring>
//#pragma warning(disable:4996)
//using namespace std;
//char* getname(void);   //����ԭ��
//
//int main() 
//{
//	char* name;
//	name = getname();
//	cout << name << " at " << (int*)name<<endl;
//	delete [] name;
//
//	name = getname();               //�ͷ�ָ��name���ڴ�󣬿����ٴε���
//	cout << name << " at " << (int*)name << endl;
//	delete [] name;
//	return 0;
//}
//char * getname()   //����һ�������ַ�����ָ��
//{
//	char name[80];
//	cout << "Enter the last name:";
//	cin >> name;
//	char* pn = new char[strlen(name) + 1];
//	strcpy(pn, name);
//	return pn;
//}