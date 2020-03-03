//#include <iostream>
//
//using std::cout;
//using std::endl;
//
//#include <iomanip>
//
//using std::setprecision;
//
//int main()
//{
//    int i=1;
//    int j=0;
//    double a, b;
//
//    cout << setprecision(2);
//
//    for (; i <= 2; i++)
//        cout << "I is now equal to " << i << endl;
//
//    for (; j <= 3; j++) {
//        cout << "\tJ is now equal to " << j << endl;
//
//        cout << "\t\ti + j = " << i + j << "\ti - j = "
//            << i - j << endl;
//        cout << "\t\ti * j = " << i * j << "\ti ^ j = "
//            << pow(i, j) << endl;
//
//        if (j == 0)
//            continue;
//        else {
//            a = i;
//            b = j;
//            cout << "\t\ti / j = " << a / b;
//            cout << "\ti % j = " << int(a) % int(b) << endl;
//        }
//    }
//
//    cout << "The final values of i and j are: " << i
//        << " and " << j << endl;
//
//    return 0;
//}