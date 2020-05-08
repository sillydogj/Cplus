//
//  main.cpp
//  CPlus
//
//  Created by 龘葡萄 on 2020/5/4.
//  Copyright © 2020 龘葡萄. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


// 函数声明
void allocateSpace(int tArray[],int len);

// 1 定义结构体
struct Student {
    string sname;
    int sscore;
};

struct Teacher {
    string tname;
    int tid;
    Student sArray[5];
};

// 赋值函数
void allocateSpace(struct Teacher tArray[],int len)
{
    string nameSeed = "ABCDE";
    string sname = "学生";
    string tname = "老师";

    for(int i = 0;i<len;i++)
    {
//        tArray[i].tname = "Teacher_";
        tArray[i].tname = tname + nameSeed[i];
        for(int j = 0;j<5;j++)
        {
            string jstr=to_string(j);
//            tArray[i].sArray[j].sname = "Student_";
            tArray[i].sArray[j].sname = sname + nameSeed[i] + jstr;
            tArray[i].sArray[j].sscore = rand() % 61 + 40;
        }
    }
}

void printInfo(struct Teacher tArray[],int len)
{
    srand((unsigned int)time(NULL)); //随机数种子

    for(int i = 0;i<len;i++)
    {
        cout << "老师--" << tArray[i].tname << endl;
        for(int j = 0;j<5;j++)
        {
            cout << "   " << "学生--" << tArray[i].sArray[j].sname << endl;
            cout << "   " << "学生分数--" << tArray[i].sArray[j].sscore << endl;

        }
    }

}


//int main(int argc, const char * argv[]) {
//
//    // 创建3名老师数组 结构体变量
//    struct Teacher tArray[3];
//
//    // 赋值
//    int len = sizeof(tArray) / sizeof(tArray[0]);
//    allocateSpace(tArray,len);
//    return printInfo(tArray, len); //打印数据
//
////    insert code here...
////    std::cout << "Hello, World!\n";
////    return 0;
//}
