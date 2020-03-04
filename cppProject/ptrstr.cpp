//#include<iostream>
//#include<cstring>
//#pragma warning(disable:4996)
//using namespace std;
//int main() {
//	char animal[20] = "bear";    //数组字符串bear
//	const char* bird = "wren";   //指针bird设为wren
//	char* ps;
//
//	cout << animal << " and " << bird << endl;
//	cout << "Enter a kind of animal:";
//	cin >> animal;
//
//	ps = animal;
//	cout << ps << "!\n";
//	cout << animal << " at " << (int*)animal << endl;     //如果要显示的是字符串的地址，则必须将这种指针强制转换为另一种指针类型，如（int *）
//	cout << ps << " at " << (int*)ps << endl;

//	ps = new char[strlen(animal) + 1];  //fox会浪费空间，使用strlen（）来确定字符串的长度，并将它加上1来获得包含空字符时该字符串的长度
                                        //随后使用new来分配刚好足够存储该字符串的空间   
//	strcpy(ps, animal);
//	cout << "After using strcpy():\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//	delete[] ps;
//	return 0;
//}