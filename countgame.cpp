#include <iostream>
#include<time.h>
#include<windows.h>//system("cls")������������
#include<conio.h>//getch()����������
#include<stdlib.h>
using namespace std;

int main()
{   int pz;//���������
    int py;//����������
    int sco;//�ܵ÷�
    clock_t st,nowt;//��ʼʱ��st�͵�ǰ��ʱ��
    char b='y',jieg;
    int ran1;//���������Ľ��
    while (1)
    {
        pz=0;//������������
        py=0;//����������������
        sco=0;//���ܵ÷�����
        st=time(NULL);//��ȡ��ʼ��ʱ��
        do
        {
            start1:ran1=rand()%100;//������������ҽ������ģ100��ȡ����
            switch(ran1)//���������ѡ�����������
            {
                case 1:system("cls");
                cout<<"68-19=59"<<endl;
                cout<<"���𣿶�----����y����----����n"<<endl;
                jieg=getch();//�Ӽ��̽���һ���ַ���������
                pz++;//������������1
                if(jieg=='n')//����˽��˲���
                {
                    sco+=10;//��10��
                    py++;//�����Ŀ������һ

                }
                break ;//������ѭ��

                case 2:system("cls");
                cout<<"17-13=4"<<endl;
                cout<<"���𣿶�----����y����----����n"<<endl;
                jieg=getch();//�Ӽ��̽���һ���ַ���������
                pz++;//������������1
                if(jieg=='y')//����˽��˲���
                {
                    sco+=10;//��10��
                    py++;//�����Ŀ������һ

                }
                break ;//������ѭ��
                case 3:system("cls");
                cout<<"6-19=9"<<endl;
                cout<<"���𣿶�----����y����----����n"<<endl;
                jieg=getch();//�Ӽ��̽���һ���ַ���������
                pz++;//������������1
                if(jieg=='n')//����˽��˲���
                {
                    sco+=10;//��10��
                    py++;//�����Ŀ������һ

                }
                break ;//������ѭ��
            default:goto start1;

            }
            nowt=time(NULL);//��ȡ��ǰʱ��

        }
        while((nowt-st)<=60);//����ǰʱ���ȥ��ʼʱ��С��1���ӣ�ѭ��
        system("cls");
        cout<<"game over."<<endl;
        cout<<"��������"<<pz<<endl;
        cout<<"����������"<<py<<endl;
        cout<<"�÷֣�"<<sco<<endl;
        cin>>b;
        if(b=='n')
        {
            cout<<"byebye!"<<endl ;
            break;
        }
    }


    return 0;
}
