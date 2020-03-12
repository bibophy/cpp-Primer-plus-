#include "Stock01.h"
#include<iostream>

using namespace std;
Stock::Stock() {
	cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const string &co,long n,double pr) {
	cout << "Constructor using " << co << " called\n";
	company = co;

	if (n < 0) {
		cout << "Number of shares can't be negive;"
			<< company << " share set to 0\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
Stock::~Stock() {
	cout << "Bye " << company << endl;
}
void Stock::buy(long num, double price) {
	if (num < 0) {
		cout << "Number of shares purchased can't be negative."
			<< "Transaction is aborted.\n";
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price) {
	if (num < 0) {
		cout << "Number of shares purchased can't be negative."
			<< "Transaction is aborted.\n";
	}
	else if (num > shares) {
		cout << "You can't sell more than you have! Transaction is aborted.\n";
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
}
void Stock::show() {
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(3);   //������λС��

	cout << "Company :" << company
		<< "Shares :" << shares << endl;
	cout << " share price :$ " << share_val;

	cout.precision(2);   //������λС��
	cout << " Total worth :$ " << total_val << endl;

	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}


