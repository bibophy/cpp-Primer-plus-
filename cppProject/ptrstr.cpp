//#include<iostream>
//#include<cstring>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	char animal[20] = "bear";    //�����ַ���bear
//	const char* bird = "wren";   //ָ��bird��Ϊwren
//	char* ps;
//
//	cout << animal << " and " << bird << endl;
//	cout << "Enter a kind of animal:";
//	cin >> animal;
//
//	ps = animal;
//	cout << ps << "!\n";
//	cout << animal << " at " << (int*)animal << endl;     //���Ҫ��ʾ�����ַ����ĵ�ַ������뽫����ָ��ǿ��ת��Ϊ��һ��ָ�����ͣ��磨int *��
//	cout << ps << " at " << (int*)ps << endl;

//	ps = new char[strlen(animal) + 1];  //fox���˷ѿռ䣬ʹ��strlen������ȷ���ַ����ĳ��ȣ�����������1����ð������ַ�ʱ���ַ����ĳ���
                                        //���ʹ��new������պ��㹻�洢���ַ����Ŀռ�   
//	strcpy(ps, animal);
//	cout << "After using strcpy():\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//	delete[] ps;
//	return 0;
//}