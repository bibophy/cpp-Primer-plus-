//#pragma once
//#ifndef STOCK00_H_
//#define STOCK00_H_
//
//using namespace std;
//#include<iostream>
//#include<string>
//class Stock {
//	std::string company;
//	long shares;
//	double share_val;
//	double total_val;
//	void set_tot() { total_val = shares * share_val; }
//public:
//	void acquire(const std::string& co, long n, double pr) {
//		company = co;
//		if (n < 0) {
//			cout << "Number of shares can't be negitive:"
//				<< company << " shares set to 0.\n";
//			shares = 0;
//		}
//		else
//			shares = n;
//		share_val = pr;
//		set_tot();
//	}
//	void buy(long num, double price) {
//		if (num < 0) {
//			cout << "Number of shares can't be negitive:"
//				<< company << " Transactions is aborted.\n";
//			shares = 0;
//		}
//		else
//			shares += num;
//		share_val = price;
//		set_tot();
//	}
//	void sell(long num, double price) {
//		if (num < 0) {
//			cout << "Number of shares can't be negitive:"
//				<< " Transactions is aborted.\n";
//			shares = 0;
//		}
//		else if (num > shares) {
//			cout<<"you can't sell more than you have!"
//				<< " Transactions is aborted.\n";
//		}
//		else {
//			shares -= num;
//			share_val = price;
//			set_tot();
//		}
//	}
//	void update(double price) {
//		share_val = price;
//		set_tot();
//	}
//	void show() {
//
//	}
//};
//#endif
//
