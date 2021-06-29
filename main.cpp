#include <iostream>
#include<string>
#include "dir1/swap.h"
#include <ctime>
using namespace std;
#define day 7


void fuck() {

    // 变量命名
    char ch = 'a'; // 不可用双引号 单个字符
    char ch2[] = "100000";   //多个字符 双引号
    string ch3 = "200000";   //多个字符 c++风格字符串
    const int month = 12; //long short long long  int
    float f1 = 3.141592658566666666; // 7位有效数字
    double d1 = 3.14;
    bool flag = true;

    // 数组
    int score2[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int score3[10];
    //利用下标赋值
    score3[0] = 100;

    int arr2[2][3] =  //二维数组
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };


    cout << "array size " << sizeof(score2) << endl;

    cout << "send it! \n " << day << endl;
    cout << sizeof(ch) << endl;

    cout << f1 << endl;
    cout << d1 << endl;

    cout << (int) ch << endl;  //查看字符a对应的ASCII码
    ch = 98; //可以直接用ASCII给字符型变量赋值
    cout << ch << endl;
    cout << ch2 << endl;
    cout << ch3 << endl;
    cout << flag << endl;

    int a = 0;
//    cout << "请输入整型变量：" << endl;
//    cin >> a;
    cout << a << endl;

    // 逻辑
    int d = 15;
    int b = 10;

    cout << (d && b) << endl;// 1



    if (d > 600) {
        cout << "xxsx" << endl;
    } else {
        cout << "uuuu" << endl;
    }

    int c = 0;  //三目运算符
    c = a > b ? a : b;

    cout << c << endl;


    int score = 10;

    switch (score)  //  case里如果没有break，那么程序会一直向下执行
    {
        case 10:
        case 9:
            cout << "typical" << endl;
            break;
        case 6:
            cout << "一般" << endl;
            break;
        default:
            cout << "烂片" << endl;
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

    for (int i : arr)  // 快速循环
    {
        cout << i << endl;
    }

}

int getsum(int a, int b) {
    return a + b;
}

void pointer() {
    int a = 10; //定义整型变量a

    //指针定义语法： 数据类型 * 变量名 ;
    int *p;

    //指针变量赋值
    p = &a; //指针指向变量a的地址

    cout << &a << endl; //打印数据a的地址
    cout << "*p = " << *p << endl;

//    int * p2 = nullptr;
//    cout << *p2 << endl;

    int c = 10;
    int b = 10;

    //const修饰的是指针，指针指向可以改，指针指向的值不可以更改
    const int *p1 = &c;
    p1 = &b; //正确
    //*p1 = 100;  报错

    //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    int *const p2 = &c;
    //p2 = &b; //错误
    *p2 = 100; //正确


}

int pointer2() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr;  //指向数组的指针

    cout << "fffff： " << arr << endl;
    cout << "指针访问第一个元素： " << *p << endl;

    return 999;
}

void dict() {
    // 结构体相当于字典
    struct student {
        //成员列表
        string name;  //姓名
        int age{};      //年龄
        int score{};    //分数
    }; //结构体变量创建方式3


    struct student stu1; //struct 关键字可以省略

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

    struct student stu = {"张三", 18, 100,};
    struct student *p = &stu;
    p->score = 80;
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
    cout << "姓名：" << stu.score << " 年龄：" << p->age << " 分数：" << p->score << endl;


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
    string tName = "教师";
    string sName = "学生";
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
            cout << "\t姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
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
    srand((unsigned int)time(NULL)); //随机数种子 头文件

    Teacher tArray[3]; //老师数组

    int len = sizeof(tArray) / sizeof(Teacher);

    allocateSpace(tArray, len); //创建数据

    printTeachers(tArray, len); //打印数据

    return 0;
}

// c++常规语法跟js 基本差不多