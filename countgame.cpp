#include <iostream>
#include<time.h>
#include<windows.h>//system("cls")被包括在其中
#include<conio.h>//getch()被包含其中
#include<stdlib.h>
using namespace std;

int main()
{   int pz;//答题的总数
    int py;//答对题的总数
    int sco;//总得分
    clock_t st,nowt;//开始时间st和当前的时间
    char b='y',jieg;
    int ran1;//存放随机数的结果
    while (1)
    {
        pz=0;//将答题数清零
        py=0;//将答对题的总数清零
        sco=0;//将总得分清零
        st=time(NULL);//获取开始的时间
        do
        {
            start1:ran1=rand()%100;//产生随机数，且将随机数模100后取余数
            switch(ran1)//按照随机数选择进入下述的
            {
                case 1:system("cls");
                cout<<"68-19=59"<<endl;
                cout<<"对吗？对----输入y，错----输入n"<<endl;
                jieg=getch();//从键盘接受一个字符，不回显
                pz++;//答题总数增加1
                if(jieg=='n')//答对了进此操作
                {
                    sco+=10;//加10分
                    py++;//答对题目总数加一

                }
                break ;//跳出此循环

                case 2:system("cls");
                cout<<"17-13=4"<<endl;
                cout<<"对吗？对----输入y，错----输入n"<<endl;
                jieg=getch();//从键盘接受一个字符，不回显
                pz++;//答题总数增加1
                if(jieg=='y')//答对了进此操作
                {
                    sco+=10;//加10分
                    py++;//答对题目总数加一

                }
                break ;//跳出此循环
                case 3:system("cls");
                cout<<"6-19=9"<<endl;
                cout<<"对吗？对----输入y，错----输入n"<<endl;
                jieg=getch();//从键盘接受一个字符，不回显
                pz++;//答题总数增加1
                if(jieg=='n')//答对了进此操作
                {
                    sco+=10;//加10分
                    py++;//答对题目总数加一

                }
                break ;//跳出此循环
            default:goto start1;

            }
            nowt=time(NULL);//获取当前时间

        }
        while((nowt-st)<=60);//若当前时间减去起始时间小于1分钟，循环
        system("cls");
        cout<<"game over."<<endl;
        cout<<"做题数："<<pz<<endl;
        cout<<"作对题数："<<py<<endl;
        cout<<"得分："<<sco<<endl;
        cin>>b;
        if(b=='n')
        {
            cout<<"byebye!"<<endl ;
            break;
        }
    }


    return 0;
}
