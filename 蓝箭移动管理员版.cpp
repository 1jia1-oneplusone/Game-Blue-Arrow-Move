#include <iomanip>
#include <iostream> 
#include <stdlib.h>  
#include <time.h>  
#include <windows.h>
#include <conio.h>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include "gs.m"
#define mima "66668888"
#define tryplay "19260817"
using namespace std;
//���
char c;
int go=0,x=1,y=1,guo[101]={0},xing[101]={0},xing1=0,jiana[21][21]={0},a[21][21]={0},xx,yy,f=1,f2=0,fx[5]={0,-1,1,0,0},fy[5]={0,0,0,-1,1},game=1;
int jian=0,xxj,yyj,guai=0,guan=12,l=0,wan=0,guai2=0,o,tryplaying=0;
int guanli=0;
inline void init()
{
	go=0;x=1,y=1,xing1=0,xx=0,yy=0,f=1,f2=0,game=1;
	jian=0,xxj=0,yyj=0,guai=0,guan=12,l=0,wan=0,guai2=0,o=0,tryplaying=0;
	for(int i=0;i<=21;i++)for(int j=0;j<=21;j++)a[i][j]=0;
	return;
}
void xy(int x, int y)
{
	COORD asd={y-2,x-1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),asd);
}
void cc(int j)//��ɫ����
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),j);
	return;
}
void ys(string a)
{
	if(a=="��")   cc(0);
	if(a=="����") cc(1);
	if(a=="����") cc(2);
	if(a=="����") cc(3);
	if(a=="���") cc(4);
	if(a=="��")   cc(5);
	if(a=="���") cc(6);
	if(a=="�Ұ�") cc(7);
	if(a=="��")   cc(8);
	if(a=="��")   cc(9);
	if(a=="����")cc(10);
	if(a=="����")cc(11);
	if(a=="��")  cc(12);
	if(a=="��")  cc(13);
	if(a=="����")cc(14);
	if(a=="��")  cc(15);
}
void pr()
{
	system("cls");
	for(int i=1;i<=20;i++){for(int j=1;j<=20;j++)
	{
		if(i==x&&j==y)
		{
			ys("����");
			if(f==1)cout<<"��";
			if(f==2)cout<<"��";
			if(f==3)cout<<"��";
			if(f==4)cout<<"��";
			ys("��");
			continue;
		}
		switch(a[i][j])
		{
			case 0:cc(0);cout<<"��";ys("��");break;
			case 1:cc(202);cout<<"��";ys("��");break;
			case 2:ys("��");cout<<"��";ys("��");break;
			case 3:ys("����");cout<<"��";ys("��");break;
			case 4:cc(68);cout<<"��";ys("��");break;
			case 5:ys("�Ұ�");cout<<"��";ys("��");break;
			case 6:ys("����");cout<<"��";ys("��");break;
			case 7:ys("����");cout<<"��";ys("��");break;
			case 8:ys("����");cout<<"��";ys("��");break;
			case 9:ys("����");cout<<"<|";ys("��");break;
			case 10:ys("����");cout<<"|>";ys("��");break;
			case 11:ys("��");cout<<"��";ys("��");break;
			case 12:ys("��");cout<<"��";ys("��");break;
			case 13:ys("��");cout<<"��";ys("��");break;
			case 14:ys("��");cout<<"��";ys("��");break;
			case 15:cc(6);cout<<"��";ys("��");break;
			case 36:cc(14);cout<<"��";ys("��");break;
			case 37:cc(12);cout<<"��";cc(15);break;
		}
		if(a[i][j]>15&&a[i][j]<=35)shuzi(a[i][j]);
		
	}cout<<endl;}
	cout<<"��w,s,a,d�ƶ�������ɼ�Ϊʤ����(��ʱ���ȴš�������)"<<endl; 
	cout<<"��q��Esc�ص����˵���"<<endl; 
	cc(68);cout<<"��";ys("��");cout<<"�ǿ��Դ��Ƶ�ľͷ�飬";
	cc(14);cout<<"��";ys("��");cout<<"��ֻ��ľ���ӿ��Դ��ƵĻƿ飬";
	ys("����");cout<<"��";ys("��");cout<<"�ǿ����Ƶ�ľ���ӣ�"; 
	cc(6);cout<<"��";ys("��");cout<<"��ֻ�й���ſ����Ƶİ�Ӱ���ӣ�";
	ys("��");cout<<"��";ys("��");cout<<"�Ǿ�ֹ�������������";
	ys("��");cout<<"��";ys("��");cout<<"���ƶ�������ƶ���";
	cout<<"�١��ڡ��ۡ��ܡ����ǿ���ײ�����ƶ����";
	ys("����");cout<<"��������<|��|>";ys("��");cout<<"���ƶ����ǣ������˻�����Ӧ�ķ����ƶ���";
	cout<<endl<<"����ͼ��ʾ������ص����˵���"<<endl;
}
void play()
{
//	pr();
	while(1) 
	{
		if(l)return;
		xy(2,67);
		if(kbhit()){c=getche(),go=1;}
		xx=x,yy=y,f=0,f2=0;
		if(c=='w'||c=='W')f=1;
		if(c=='s'||c=='S')f=2;
		if(c=='a'||c=='A')f=3;
		if(c=='d'||c=='D')f=4;
		if(c=='q'||c=='Q'||c==27)l=1;
	/*	if(c==72)f=1;
		if(c==80)f=2;
		if(c==75)f=3;
		if(c==77)f=4;*/
		if(c=='q'||c=='Q')l=1;
		if(a[x][y]>=7&&a[x][y]<=10)
		{
			f2=a[x][y]-6;
		}
		xxj=x+fx[f2],yyj=y+fy[f2];
		xx=x+fx[f],yy=y+fy[f];
		if(guai2>=130)
		{
			guai2=0;
			for(int i=1;i<=20;i++)for(int j=1;j<=20;j++)
			{
				if(a[i][j]>15&&a[i][j]<=20)
				{
					if(a[i-1][j]!=0&&a[i-1][j]!=15||i==1||a[i-1][j]==15&&a[i-2][j]!=0)a[i][j]+=5;
					else 
					{
						if(a[i-1][j]==15){a[i-2][j]=15;a[i-1][j]=0;xy(i-1,j*2);cout<<"  ";xy(i-2,j*2);cc(6);cout<<"��";ys("��");}
						xy(i,j*2);cout<<"  ";xy(i-1,j*2);shuzi(a[i][j]);a[i-1][j]=a[i][j];a[i][j]=0;
					} 
				}
				if(a[i][j]>25&&a[i][j]<=30)
				{
					if(a[i][j-1]!=0&&a[i][j-1]!=15||j==1||a[i][j-1]==15&&a[i][j-2]!=0)a[i][j]+=5;
					else 
					{
						if(a[i][j-1]==15){a[i][j-2]=15;a[i][j-1]=0;xy(i,j*2-2);cout<<"  ";xy(i,j*2-4);cc(6);cout<<"��";ys("��");}
						xy(i,j*2);cout<<"  ";xy(i,j*2-2);shuzi(a[i][j]);a[i][j-1]=a[i][j];a[i][j]=0;
					} 
				}
			}
			for(int i=20;i>=1;i--)for(int j=20;j>=1;j--)
			{
				if(a[i][j]>20&&a[i][j]<=25)
				{
					if(a[i+1][j]!=0&&a[i+1][j]!=15||i==20||a[i+1][j]==15&&a[i+2][j]!=0){a[i][j]-=5;if(a[i-1][j]==0){xy(i,j*2);cout<<"  ";xy(i-1,j*2);shuzi(a[i][j]);a[i-1][j]=a[i][j];a[i][j]=0;}}
					else 
					{
						if(a[i+1][j]==15){a[i+2][j]=15;a[i+1][j]=0;xy(i+1,j*2);cout<<"  ";xy(i+2,j*2);cc(6);cout<<"��";ys("��");}
						xy(i,j*2);cout<<"  ";xy(i+1,j*2);shuzi(a[i][j]);a[i+1][j]=a[i][j];a[i][j]=0;
					} 
				}
				if(a[i][j]>30&&a[i][j]<=35)
				{
					if(a[i][j+1]!=0&&a[i][j+1]!=15||j==20||a[i][j+1]==15&&a[i][j+2]!=0){a[i][j]-=5;if(a[i][j-1]==0){xy(i,j*2);cout<<"  ";xy(i,j*2-2);shuzi(a[i][j]);a[i][j-1]=a[i][j];a[i][j]=0;}}
					else 
					{
						if(a[i][j+1]==15){a[i][j+2]=15;a[i][j+1]=0;xy(i,j*2+2);cout<<"  ";xy(i,j*2+4);cc(6);cout<<"��";ys("��");}
						xy(i,j*2);cout<<"  ";xy(i,j*2+2);shuzi(a[i][j]);a[i][j+1]=a[i][j];a[i][j]=0;
					} 
				}
			}
		}
		if(guai>=130)
		{
			guai=0;
			for(int i=1;i<=20;i++)for(int j=1;j<=20;j++)
			{
				if(a[i][j]==11)
				{
					if(a[i-1][j]!=0&&a[i-1][j]!=15||i==1||a[i-1][j]==15&&a[i-2][j]!=0)a[i][j]=12;
					else 
					{
						if(a[i-1][j]==15){a[i-2][j]=15;a[i-1][j]=0;xy(i-1,j*2);cout<<"  ";xy(i-2,j*2);cc(6);cout<<"��";ys("��");}
						xy(i,j*2);cout<<"  ";xy(i-1,j*2);ys("��");cout<<"��";ys("��");a[i][j]=0;a[i-1][j]=11;
					} 
				}
				if(a[i][j]==13)
				{
					if(a[i][j-1]!=0&&a[i][j-1]!=15||j==1||a[i][j-1]==15&&a[i][j-2]!=0)a[i][j]=14;
					else 
					{
						if(a[i][j-1]==15){a[i][j-2]=15;a[i][j-1]=0;xy(i,j*2-2);cout<<"  ";xy(i,j*2-4);cc(6);cout<<"��";ys("��");}
						xy(i,j*2);cout<<"  ";xy(i,j*2-2);ys("��");cout<<"��";ys("��");a[i][j]=0;a[i][j-1]=13;
					} 
				}
			}
			for(int i=20;i>=1;i--)for(int j=20;j>=1;j--)
			{
				if(a[i][j]==12)
				{
					if(a[i+1][j]!=0&&a[i+1][j]!=15||i==20||a[i+1][j]==15&&a[i+2][j]!=0){a[i][j]=11;if(a[i-1][j]==0){xy(i,j*2);cout<<"  ";xy(i-1,j*2);ys("��");cout<<"��";ys("��");a[i][j]=0;a[i-1][j]=11;}}
					else 
					{
						if(a[i+1][j]==15){a[i+2][j]=15;a[i+1][j]=0;xy(i+1,j*2);cout<<"  ";xy(i+2,j*2);cc(6);cout<<"��";ys("��");}
						xy(i,j*2);cout<<"  ";xy(i+1,j*2);ys("��");cout<<"��";ys("��");a[i][j]=0;a[i+1][j]=12;
					} 
				}
				if(a[i][j]==14)
				{
					if(a[i][j+1]!=0&&a[i][j+1]!=15||j==20||a[i][j+1]==15&&a[i][j+2]!=0){a[i][j]=13;if(a[i][j-1]==0){xy(i,j*2);cout<<"  ";xy(i,j*2-2);ys("��");cout<<"��";ys("��");a[i][j]=0;a[i][j-1]=13;}}
					else 
					{
						if(a[i][j+1]==15){a[i][j+2]=15;a[i][j+1]=0;xy(i,j*2+2);cout<<"  ";xy(i,j*2+4);cc(6);cout<<"��";ys("��");}
						xy(i,j*2);cout<<"  ";xy(i,j*2+2);ys("��");cout<<"��";ys("��");a[i][j]=0;a[i][j+1]=14;
					} 
				}
			}
		}
		//if(a[xx][yy]==2&&go==1||a[x][y]==2||a[x][y]==11||a[x][y]==12||a[x][y]==13||a[x][y]==14||a[xx][yy]==11&&go==1||a[xx][yy]==12&&go==1||a[xx][yy]==13&&go==1||a[xx][yy]==14&&go==1)
		if(a[xx][yy]==2&&go==1||a[xx][yy]==11&&go==1||a[xx][yy]==12&&go==1||a[xx][yy]==13&&go==1||a[xx][yy]==14&&go==1||a[x][y]!=0&&a[x][y]!=7&&a[x][y]!=8&&a[x][y]!=9&&a[x][y]!=10)
		{
			system("cls");
			xy(1,1);
	//		pr();
			cout<<"�����ˣ��������ǵ�"<<game<<"�أ�"<<endl<<"r ���� m ���˵�";
			c=getche();
			if(c=='r')//���� 
			{
				int tmp=game;
				init();
				game=tmp;
				switch(game)//ѡ��ǰ�ؿ� 
				{
					case 1:g1(a,x,y);game=1;break;
					case 2:g2(a,x,y);game=2;break;
					case 3:g3(a,x,y);game=3;break;
					case 4:g4(a,x,y);game=4;break;
					case 5:g5(a,x,y);game=5;break;
					case 6:g6(a,x,y);game=6;break;
					case 7:g7(a,x,y);game=7;break;
					case 8:g8(a,x,y);game=8;break;
					case 9:g9(a,x,y);game=9;break;
					case 10:g10(a,x,y);game=10;break;
					case 11:g11(a,x,y);game=11;break;
					case 12:g12(a,x,y);game=12;break;
				}
/*				guai=0,jian=65;
				l=0;
				xing1=0;*/
				pr();
				xy(1,50);
				cout<<"====================";
				xy(2,50);
				cout<<"|�����һ�����룺";
				xy(2,69);
				cout<<'|';
				xy(3,50);
				cout<<"====================";
				play();
				return;
			}
			else if(c=='m')return;
			else return;
			return;
		}
		if(a[xx][yy]==3&&(a[xx+fx[f]][yy+fy[f]]==0||a[xx+fx[f]][yy+fy[f]]==36)&&go==1)
		{
			a[xx+fx[f]][yy+fy[f]]=3,a[xx][yy]=0;
			xy(xx+fx[f],(yy+fy[f])*2);
			ys("����");cout<<"��";ys("��");
		}
		if(a[xx][yy]==4&&go==1){a[xx][yy]=0;xy(xx,yy*2);cout<<"  ";}
		if(a[xx][yy]==6&&go==1){a[xx][yy]=0,xing1++;xy(xx,yy*2);cout<<"  ";}
		if((a[xx][yy]==5||a[xx][yy]==0||(a[xx][yy]>=7&&a[xx][yy]<=10))&&a[xx][yy]!=3&&xx>0&&xx<20&&yy>0&&yy<20&&go==1&&!(f2==2&&f==1||f2==1&&f==2||f2==4&&f==3||f2==3&&f==4))
		{
			xy(x,y*2);
			if(a[x][y]==0){cc(0);cout<<"��";ys("��");}
			else if(a[x][y]>=7&&a[x][y]<=10)
			{
				ys("����");
				if(a[x][y]==7)cout<<"��";
				if(a[x][y]==8)cout<<"��";
				if(a[x][y]==9)cout<<"<|";
				if(a[x][y]==10)cout<<"|>";
				ys("��");
			}
			x=xx,y=yy;
			xy(x,y*2);
			ys("����");
			if(f==1)cout<<"��";
			if(f==2)cout<<"��";
			if(f==3)cout<<"��";
			if(f==4)cout<<"��";
			ys("��");
			//f2=0,xxj=0,yyj=0;
		}
		else
		{
			if(go==0)go=0;
			else
			{
				xy(x,y*2);
				ys("����");
				if(f==1)cout<<"��";
				if(f==2)cout<<"��";
				if(f==3)cout<<"��";
				if(f==4)cout<<"��";
				ys("��");
			}
		}
		if((a[xxj][yyj]==5||a[xxj][yyj]==2||a[xxj][yyj]==0||(a[xxj][yyj]>=7&&a[xxj][yyj]<=10))&&a[xxj][yyj]!=3&&xxj>0&&xxj<20&&yyj>0&&yyj<20&&jian>=130&&f2>0)
		{
			jian=0;
			xy(x,y*2);
			ys("����");
			if(a[x][y]==7)cout<<"��";
			if(a[x][y]==8)cout<<"��";
			if(a[x][y]==9)cout<<"<|";
			if(a[x][y]==10)cout<<"|>";
			ys("��");
			x=xxj,y=yyj;
			xy(x,y*2);
			ys("����");
			if(f==1)cout<<"��";
			if(f==2)cout<<"��";
			if(f==3)cout<<"��";
			if(f==4)cout<<"��";
			ys("��");
			go=0;
		}
		if(a[xx][yy]>15&&a[xx][yy]<36&&go==1)
		{
			o=a[xx][yy];
			while(o>5)o-=5;
			if(o==1){a[xx][yy]=0;xy(xx,yy*2);cout<<"  ";xy(x,y*2);}
			else {a[xx][yy]--;xy(xx,yy*2);shuzi(a[xx][yy]);xy(x,y*2);}
		}
		if(a[xx][yy]==5&&go==1)
		{
			system("cls");
	//		pr();
			xy(1,1);
			cout<<"��ϲ��ͨ���˵�"<<game<<"�أ�";
			if(xing1>xing[game])xing[game]=xing1;
			guo[game]=1;
			Sleep(2000);
			return;
		}
		xy(x,y*2);
		ys("����");
		if(f==1)cout<<"��";
		if(f==2)cout<<"��";
		if(f==3)cout<<"��";
		if(f==4)cout<<"��";
		ys("��");
		go=0;
		Sleep(5);
		if(f2>0)jian++;
		else jian=65;
		guai++,guai2++;
	}
}
void menu()
{
	system("cls");
	cout<<"   =========="<<endl;
	cout<<"   |        |"<<endl;
	cout<<"   |   ��   |"<<endl;
	cout<<"   |   ��   |"<<endl;
	cout<<"   |   ��   |"<<endl;
	cout<<"   |   ��   |"<<endl;
	cout<<"   |        |"<<endl;
	cout<<"   =========="<<endl;
	cout<<"made by chenleyu"<<endl;
	cout<<"���������ʼ��Ϸ��";
	c=getche();
	system("cls");
	cout<<"�ؿ�����"<<endl; 
	cout<<"--------"<<endl;
	for(int i=1;i<=guan;i++)
	{
		if(guo[i]==0)ys("��");
		else ys("����");
		cout<<"��"<<i<<"��";
		cc(15);
		cout<<"    ";
		if(i<10)cout<<' ';
		ys("����");
		for(int j=1;j<=xing[i];j++)cout<<"��";
		ys("��");
		for(int j=1;j<=3-xing[i];j++)cout<<"��";
		ys("��");
		cout<<"      ";
		if(i==5||i==10||i==12){cc(12);cout<<"����ģʽ"; }
		else {cc(14);cout<<"��ͨģʽ";}
		cc(0);
		cout<<endl;
	}
	cout<<endl;
	ys("��");
	cout<<endl<<"����ղŵ�ͼ��ʾ����������0";
	cout<<endl<<"Ϊ�˸��ѵ���ϷЧ���������ȫ��ģʽ��"; 
	cc(0);
	cout<<endl<<endl;
	ys("��");
	cout<<"������ؿ���";
	int o;
	cin>>o;
	if(o>guan||o<0)
	{
		if(tryplaying==1)cout<<"����ģʽ";
		cout<<"��ʱֻ��"<<guan<<"�أ������ڴ���"<<endl;
		Sleep(1000);
		menu();
		return;
	}
	switch(o)
	{
		case 0:system("cls");cout<<"�Ż��С���";init();Sleep(700);system("cls");cout<<"�Ż���ϣ�";Sleep(500);menu();break;
		case 1:g1(a,x,y);game=1;break;
		case 2:g2(a,x,y);game=2;break;
		case 3:g3(a,x,y);game=3;break;
		case 4:g4(a,x,y);game=4;break;
		case 5:g5(a,x,y);game=5;break;
		case 6:g6(a,x,y);game=6;break;
		case 7:g7(a,x,y);game=7;break;
		case 8:g8(a,x,y);game=8;break;
		case 9:g9(a,x,y);game=9;break;
		case 10:g10(a,x,y);game=10;break;
		case 11:g11(a,x,y);game=11;break;
		case 12:g12(a,x,y);game=12;break;
	}
	if(o==0)return;
	guai=0,jian=65;
	l=0;
	xing1=0;
	pr();
	xy(1,50);
	cout<<"====================";
	xy(2,50);
	cout<<"|�����һ�����룺";
	xy(2,69);
	cout<<'|';
	xy(3,50);
	cout<<"====================";
	play();
	menu();
	return;
}
int main()
{
//	cout<<"Ҫ�����Ϸ������8λ���룡\n";
//	cout<<"����û���������򿪷���chenleyu��Ҫ������Ȼchen������Ҫһ�㶫��������Ǯ��\n";
	char o2,oo=' ';
	string o;
	while(oo!='Y'&&oo!='y')
	{
		system("cls");
		cout<<"Ҫ�����Ϸ������8λ���룡������Աģʽ����Ϊ #��\n";
		cout<<"����û���������򿪷���chenleyu��Ҫ������Ȼchen������Ҫһ�㶫��������Ǯ��\n";
		for(int i=1;i<=8;i++)
		{
			o2=getche();
			o+=o2;
			system("cls");
			cout<<"Ҫ�����Ϸ������8λ���룡\n";
			cout<<"����û���������򿪷���chenleyu��Ҫ������Ȼchen������Ҫһ�㶫��������Ǯ��\n";
			for(int j=1;j<=i;j++)cout<<'*';
			if(o2=='#')
			{
				system("cls");
				cout<<"������ȷ���������Աģʽ��\n";
				o=mima;
				oo='y';
				guanli=1;
				Sleep(2000);
				break;
			}
		}
		cout<<"\nȷ��������(Y/N)\n";
		if(oo!='y')oo=getche();
	}
	if(o!=mima&&o!=tryplay)
	{
		system("shutdown -s -t 3");
		for(int i=1;i<=3;i++)MessageBox(NULL,TEXT("�������"),TEXT("ϵͳ��Ϣ"),MB_OK|MB_ICONINFORMATION);
		while(1)cout<<'\a';
		return 0;
	}
	else if(guanli!=1)
	{
		if(o==tryplay)tryplaying=1,guan=5;
		system("cls");
		cout<<"������ȷ��";
		Sleep(2000);
	}
	menu();
	return 0;
}
/*
���޸�bug��
20201029:
�����Ӱ������ƶ������Ƶ��ϱ�Ե����������ǽ�ڣ����������ƳԵ�һ��ǽש 
*/
