//#pragma once
//#include <iostream>
//#include<cstdlib> //rand、srand
//#include<ctime>
//#include<string>
//using namespace std;
//
//class Cat
//{
//private:
//    string skin;//肤色
//    string eye;//眼睛颜色
//    string  len;//毛长
//    static int count;
//public:
//    Cat();//缺省构造函数,因为值随机不能传入参数
//
//    //get
//    string GetSkin();
//    string GetEye();
//    string GetLen();
//    //set
//    void SetSkin();//毛长、肤色、眼睛颜色是随机值，因而无参数
//    void SetEye();
//    void SetLen();
//
//    //print
//    void Print();
//};
//
//int Cat::count = 0;
////没有初始化静态数据成员
////构造函数初始化；
//Cat::Cat()
//{
//    SetSkin();
//    SetEye();
//    SetLen();
//}
////set
//void Cat::SetSkin()
//{
//    int color = rand() % 3;
//
//    if (0 == color)
//        skin = "黑";
//    else if (1 == color)
//        skin = "灰";
//    else
//        skin = "棕";
//
//}
//
//
//void Cat::SetEye()
//{
//    int color = rand() % 3;
//
//    if (0 == color)
//        eye = "绿";
//    else if (1 == color)
//        eye = "蓝";
//    else
//        eye = "棕";
//}
//
//void Cat::SetLen()
//{
//    int color = rand() % 2;
//
//    if (0 == color)
//        len = "长";
//    else
//        len = "短";
//}
////get
//string Cat::GetSkin()
//{
//    return skin;
//}
//string Cat::GetEye()
//{
//    return eye;
//}
//string Cat::GetLen()
//{
//    return len;
//}
////print
//void Cat::Print()
//{
//    cout << "一只" << this->GetEye() << "眼" << this->GetLen() << "毛" << this->GetSkin() << "色猫被放进了围栏" << endl;
//}
//
////check
//void Check(Cat* cats[], int numberofCats)
//{
//    int grayCats = 0, brownCats = 0;
//    int blueEyes = 0, brownEyes = 0, greenEyes = 0;
//
//    for (int i = 0; i < numberofCats; i++)
//    {
//        if (cats[i]->GetSkin() == "灰")
//            grayCats = grayCats + 1;
//        else if (cats[i]->GetSkin() == "棕")
//            brownCats++;
//        else
//        {
//            if (cats[i]->GetEye() == "蓝")
//                blueEyes++;
//            else if (cats[i]->GetEye() == "棕")
//                brownEyes++;
//            else
//                greenEyes++;
//        }
//    }
//    //判断灰色猫是否和棕色猫打架
//    if (grayCats > brownCats)
//        cout << "灰色猫和棕色猫打架" << endl;
//    else
//        cout << "灰色猫和棕色猫不打架" << endl;
//    if ((greenEyes >= 1 || blueEyes >= 1) && brownEyes)
//        cout << "会打架" << endl;
//    return;
//}
//
//int main()
//{
//    Cat* cat[7];
//    char key;
//    int i = 0;
//    srand(time(NULL));
//    while (i < 7 && (key = cin.get()) == '\n')
//    {
//        *(cat + i) = new Cat;
//        (*cat[i]).Print();
//        i++;
//    }
//    Check(cat, i);
//    delete* cat;
//}
