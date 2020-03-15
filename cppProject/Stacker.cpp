//#include<iostream>
//#include<cctype>
//#include"Stack.h"
//
//using namespace std;
//int main() {
//	Stack st;
//	char ch;
//	unsigned long po;
//	cout << "Please enter A to add to a purchar order,\n"
//		<< "P to process a PO, or Q to quit." << endl;
//	while (cin >> ch && toupper(ch) != 'Q') {
//		while (cin.get() != '\n')
//			continue; 
//		if (!isalpha(ch)) {           //isalpha判断字符是否为英文字母，是返回非零值，否则反之
//			cout << "\a";
//			continue;
//		}
//		switch (ch) {
//		case'a':
//		case'A':cout << "Enter a PO number to add";
//			    cin >> po;
//				if (st.isfull())
//					cout << "stack already full" << endl;
//				else
//					st.push(po);
//				break;
//		case'p':
//		case'P':if (st.isempty())
//			cout << "stack already empty" << endl;
//			   else {
//			st.pop(po);
//			cout << "PO #" << po << " popped" << endl;
//		}
//			   break;
//
//		}
//		cout << "Pleae enter A to add to purchase order,\n"
//			<< "P to process a PO,or Q to quit.\n";
//
//	}
//	return 0;
//
//}