///*阶乘的计算方式：零阶乘写成0！，1！是1*0！，2！=2*1！，3！=3*2！，以此类推*/
//#include<iostream>
//using namespace std;
//
//int main() {
//	const int elem = 16;
//	long long factorials[elem];
//	factorials[0] = factorials[1] = 1LL;
//	for (int i = 2; i < elem; i++)
//		factorials[i] = i * factorials[i - 1];
//	for (int i = 0; i < elem; i++)
//		cout << i << "!=" << factorials[i] << endl;
//
//	return 0;
//}