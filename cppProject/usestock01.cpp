#include<iostream>
#include"stock01.h";
using namespace std;

int main() {
	{
		cout << "Using constructors to creat new objects\n";
		Stock stock1("Nanosmart", 12, 20.0);
		stock1.show();
		Stock stock2("BE asss",2,2.0);
		stock2.show();

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		stock1.show();
		stock2.show();

		cout << "Using a constructors to reset an objects\n";
		stock1 = Stock("Nsisa asas", 10, 50.0);
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done" << endl;

	}
	return 0;
}