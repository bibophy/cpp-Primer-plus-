//#pragma once
//#include <iostream>
//#include<cstdlib> //rand��srand
//#include<ctime>
//#include<string>
//using namespace std;
//
//class Cat
//{
//private:
//    string skin;//��ɫ
//    string eye;//�۾���ɫ
//    string  len;//ë��
//    static int count;
//public:
//    Cat();//ȱʡ���캯��,��Ϊֵ������ܴ������
//
//    //get
//    string GetSkin();
//    string GetEye();
//    string GetLen();
//    //set
//    void SetSkin();//ë������ɫ���۾���ɫ�����ֵ������޲���
//    void SetEye();
//    void SetLen();
//
//    //print
//    void Print();
//};
//
//int Cat::count = 0;
////û�г�ʼ����̬���ݳ�Ա
////���캯����ʼ����
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
//        skin = "��";
//    else if (1 == color)
//        skin = "��";
//    else
//        skin = "��";
//
//}
//
//
//void Cat::SetEye()
//{
//    int color = rand() % 3;
//
//    if (0 == color)
//        eye = "��";
//    else if (1 == color)
//        eye = "��";
//    else
//        eye = "��";
//}
//
//void Cat::SetLen()
//{
//    int color = rand() % 2;
//
//    if (0 == color)
//        len = "��";
//    else
//        len = "��";
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
//    cout << "һֻ" << this->GetEye() << "��" << this->GetLen() << "ë" << this->GetSkin() << "ɫè���Ž���Χ��" << endl;
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
//        if (cats[i]->GetSkin() == "��")
//            grayCats = grayCats + 1;
//        else if (cats[i]->GetSkin() == "��")
//            brownCats++;
//        else
//        {
//            if (cats[i]->GetEye() == "��")
//                blueEyes++;
//            else if (cats[i]->GetEye() == "��")
//                brownEyes++;
//            else
//                greenEyes++;
//        }
//    }
//    //�жϻ�ɫè�Ƿ����ɫè���
//    if (grayCats > brownCats)
//        cout << "��ɫè����ɫè���" << endl;
//    else
//        cout << "��ɫè����ɫè�����" << endl;
//    if ((greenEyes >= 1 || blueEyes >= 1) && brownEyes)
//        cout << "����" << endl;
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
