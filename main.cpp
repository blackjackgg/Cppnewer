#include <iostream>
#include<string>
#include "dir1/swap.h"
#include <ctime>
using namespace std;
#define day 7


void fuck() {

    // ��������
    char ch = 'a'; // ������˫���� �����ַ�
    char ch2[] = "100000";   //����ַ� ˫����
    string ch3 = "200000";   //����ַ� c++����ַ���
    const int month = 12; //long short long long  int
    float f1 = 3.141592658566666666; // 7λ��Ч����
    double d1 = 3.14;
    bool flag = true;

    // ����
    int score2[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int score3[10];
    //�����±긳ֵ
    score3[0] = 100;

    int arr2[2][3] =  //��ά����
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };


    cout << "array size " << sizeof(score2) << endl;

    cout << "send it! \n " << day << endl;
    cout << sizeof(ch) << endl;

    cout << f1 << endl;
    cout << d1 << endl;

    cout << (int) ch << endl;  //�鿴�ַ�a��Ӧ��ASCII��
    ch = 98; //����ֱ����ASCII���ַ��ͱ�����ֵ
    cout << ch << endl;
    cout << ch2 << endl;
    cout << ch3 << endl;
    cout << flag << endl;

    int a = 0;
//    cout << "���������ͱ�����" << endl;
//    cin >> a;
    cout << a << endl;

    // �߼�
    int d = 15;
    int b = 10;

    cout << (d && b) << endl;// 1



    if (d > 600) {
        cout << "xxsx" << endl;
    } else {
        cout << "uuuu" << endl;
    }

    int c = 0;  //��Ŀ�����
    c = a > b ? a : b;

    cout << c << endl;


    int score = 10;

    switch (score)  //  case�����û��break����ô�����һֱ����ִ��
    {
        case 10:
        case 9:
            cout << "typical" << endl;
            break;
        case 6:
            cout << "һ��" << endl;
            break;
        default:
            cout << "��Ƭ" << endl;
            break;
    }

    int num = 5;
    while (num < 10) {
        cout << "num = " << num << endl;
        num++;
    }


    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }


}


void bubble() {
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};

    for (int i = 0; i < 9 - 1; i++) {
        for (int j = 0; j < 9 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i : arr)  // ����ѭ��
    {
        cout << i << endl;
    }

}

int getsum(int a, int b) {
    return a + b;
}

void pointer() {
    int a = 10; //�������ͱ���a

    //ָ�붨���﷨�� �������� * ������ ;
    int *p;

    //ָ�������ֵ
    p = &a; //ָ��ָ�����a�ĵ�ַ

    cout << &a << endl; //��ӡ����a�ĵ�ַ
    cout << "*p = " << *p << endl;

//    int * p2 = nullptr;
//    cout << *p2 << endl;

    int c = 10;
    int b = 10;

    //const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը���
    const int *p1 = &c;
    p1 = &b; //��ȷ
    //*p1 = 100;  ����

    //const���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
    int *const p2 = &c;
    //p2 = &b; //����
    *p2 = 100; //��ȷ


}

int pointer2() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr;  //ָ�������ָ��

    cout << "fffff�� " << arr << endl;
    cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

    return 999;
}

void dict() {
    // �ṹ���൱���ֵ�
    struct student {
        //��Ա�б�
        string name;  //����
        int age{};      //����
        int score{};    //����
    }; //�ṹ�����������ʽ3


    struct student stu1; //struct �ؼ��ֿ���ʡ��

    stu1.name = "zs";
    stu1.age = 18;
    stu1.score = 100;

    cout << "xm:" << stu1.name << "age:" << stu1.age << "score:" << stu1.score << endl;


    struct student arr[3] =
            {
                    {"zs", 18, 80},
                    {"ls", 19, 60},
                    {"ww", 20, 70}
            };

    for (auto &i : arr) {
        cout << "name" << i.name << "age" << i.age << " sc" << i.score << endl;
    }

    struct student stu = {"����", 18, 100,};
    struct student *p = &stu;
    p->score = 80;
    cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
    cout << "������" << stu.score << " ���䣺" << p->age << " ������" << p->score << endl;


}



struct Student
{
    string name;
    int score{};
};

struct Teacher
{
    string name;
    Student sArray[5];
};

void allocateSpace(Teacher tArray[] , int len)
{
    string tName = "��ʦ";
    string sName = "ѧ��";
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tArray[i].name = tName + nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].name = sName + nameSeed[j];
            tArray[i].sArray[j].score = rand() % 61 + 40;
        }
    }
}

void printTeachers(Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << tArray[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t������" << tArray[i].sArray[j].name << " ������" << tArray[i].sArray[j].score << endl;
        }
    }
}



int main() {

//    std::cout << "Hello, World!" << std::endl;
//    cout << "999999! \n";
//    fuck();
//    bubble();
//    int aa = getsum(1,2);
//    cout << aa << endl;
//    swap(55,66);
//    pointer();
//    pointer2();
//    dict();
    srand((unsigned int)time(NULL)); //��������� ͷ�ļ�

    Teacher tArray[3]; //��ʦ����

    int len = sizeof(tArray) / sizeof(Teacher);

    allocateSpace(tArray, len); //��������

    printTeachers(tArray, len); //��ӡ����

    return 0;
}

// c++�����﷨��js �������