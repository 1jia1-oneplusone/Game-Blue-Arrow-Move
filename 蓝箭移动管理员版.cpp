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
//★☆
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
void cc(int j)//颜色函数
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),j);
	return;
}
void ys(string a)
{
	if(a=="黑")   cc(0);
	if(a=="深蓝") cc(1);
	if(a=="深绿") cc(2);
	if(a=="淡蓝") cc(3);
	if(a=="深红") cc(4);
	if(a=="紫")   cc(5);
	if(a=="深黄") cc(6);
	if(a=="灰白") cc(7);
	if(a=="灰")   cc(8);
	if(a=="蓝")   cc(9);
	if(a=="淡绿")cc(10);
	if(a=="天蓝")cc(11);
	if(a=="红")  cc(12);
	if(a=="粉")  cc(13);
	if(a=="淡黄")cc(14);
	if(a=="白")  cc(15);
}
void pr()
{
	system("cls");
	for(int i=1;i<=20;i++){for(int j=1;j<=20;j++)
	{
		if(i==x&&j==y)
		{
			ys("天蓝");
			if(f==1)cout<<"↑";
			if(f==2)cout<<"↓";
			if(f==3)cout<<"←";
			if(f==4)cout<<"→";
			ys("白");
			continue;
		}
		switch(a[i][j])
		{
			case 0:cc(0);cout<<"█";ys("白");break;
			case 1:cc(202);cout<<"□";ys("白");break;
			case 2:ys("红");cout<<"⊙";ys("白");break;
			case 3:ys("淡黄");cout<<"▓";ys("白");break;
			case 4:cc(68);cout<<"█";ys("白");break;
			case 5:ys("灰白");cout<<"∩";ys("白");break;
			case 6:ys("淡黄");cout<<"★";ys("白");break;
			case 7:ys("淡绿");cout<<"▲";ys("白");break;
			case 8:ys("淡绿");cout<<"▼";ys("白");break;
			case 9:ys("淡绿");cout<<"<|";ys("白");break;
			case 10:ys("淡绿");cout<<"|>";ys("白");break;
			case 11:ys("粉");cout<<"⊕";ys("白");break;
			case 12:ys("粉");cout<<"⊕";ys("白");break;
			case 13:ys("粉");cout<<"⊕";ys("白");break;
			case 14:ys("粉");cout<<"⊕";ys("白");break;
			case 15:cc(6);cout<<"▓";ys("白");break;
			case 36:cc(14);cout<<"█";ys("白");break;
			case 37:cc(12);cout<<"●";cc(15);break;
		}
		if(a[i][j]>15&&a[i][j]<=35)shuzi(a[i][j]);
		
	}cout<<endl;}
	cout<<"按w,s,a,d移动，到达∩即为胜利！(暂时不兹磁↑↓←→)"<<endl; 
	cout<<"按q或Esc回到主菜单！"<<endl; 
	cc(68);cout<<"█";ys("白");cout<<"是可以穿破的木头块，";
	cc(14);cout<<"█";ys("白");cout<<"是只有木箱子可以穿破的黄块，";
	ys("淡黄");cout<<"▓";ys("白");cout<<"是可以推的木箱子，"; 
	cc(6);cout<<"▓";ys("白");cout<<"是只有怪物才可以推的暗影箱子，";
	ys("红");cout<<"⊙";ys("白");cout<<"是静止怪物，碰到会死，";
	ys("粉");cout<<"⊕";ys("白");cout<<"是移动怪物，会移动，";
	cout<<"①、②、③、④、⑤是可以撞死的移动怪物，";
	ys("淡绿");cout<<"▲、▼、<|、|>";ys("白");cout<<"是移动三角，碰到了会往对应的方向移动。";
	cout<<endl<<"若地图显示错误，请回到主菜单。"<<endl;
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
						if(a[i-1][j]==15){a[i-2][j]=15;a[i-1][j]=0;xy(i-1,j*2);cout<<"  ";xy(i-2,j*2);cc(6);cout<<"▓";ys("白");}
						xy(i,j*2);cout<<"  ";xy(i-1,j*2);shuzi(a[i][j]);a[i-1][j]=a[i][j];a[i][j]=0;
					} 
				}
				if(a[i][j]>25&&a[i][j]<=30)
				{
					if(a[i][j-1]!=0&&a[i][j-1]!=15||j==1||a[i][j-1]==15&&a[i][j-2]!=0)a[i][j]+=5;
					else 
					{
						if(a[i][j-1]==15){a[i][j-2]=15;a[i][j-1]=0;xy(i,j*2-2);cout<<"  ";xy(i,j*2-4);cc(6);cout<<"▓";ys("白");}
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
						if(a[i+1][j]==15){a[i+2][j]=15;a[i+1][j]=0;xy(i+1,j*2);cout<<"  ";xy(i+2,j*2);cc(6);cout<<"▓";ys("白");}
						xy(i,j*2);cout<<"  ";xy(i+1,j*2);shuzi(a[i][j]);a[i+1][j]=a[i][j];a[i][j]=0;
					} 
				}
				if(a[i][j]>30&&a[i][j]<=35)
				{
					if(a[i][j+1]!=0&&a[i][j+1]!=15||j==20||a[i][j+1]==15&&a[i][j+2]!=0){a[i][j]-=5;if(a[i][j-1]==0){xy(i,j*2);cout<<"  ";xy(i,j*2-2);shuzi(a[i][j]);a[i][j-1]=a[i][j];a[i][j]=0;}}
					else 
					{
						if(a[i][j+1]==15){a[i][j+2]=15;a[i][j+1]=0;xy(i,j*2+2);cout<<"  ";xy(i,j*2+4);cc(6);cout<<"▓";ys("白");}
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
						if(a[i-1][j]==15){a[i-2][j]=15;a[i-1][j]=0;xy(i-1,j*2);cout<<"  ";xy(i-2,j*2);cc(6);cout<<"▓";ys("白");}
						xy(i,j*2);cout<<"  ";xy(i-1,j*2);ys("粉");cout<<"⊕";ys("白");a[i][j]=0;a[i-1][j]=11;
					} 
				}
				if(a[i][j]==13)
				{
					if(a[i][j-1]!=0&&a[i][j-1]!=15||j==1||a[i][j-1]==15&&a[i][j-2]!=0)a[i][j]=14;
					else 
					{
						if(a[i][j-1]==15){a[i][j-2]=15;a[i][j-1]=0;xy(i,j*2-2);cout<<"  ";xy(i,j*2-4);cc(6);cout<<"▓";ys("白");}
						xy(i,j*2);cout<<"  ";xy(i,j*2-2);ys("粉");cout<<"⊕";ys("白");a[i][j]=0;a[i][j-1]=13;
					} 
				}
			}
			for(int i=20;i>=1;i--)for(int j=20;j>=1;j--)
			{
				if(a[i][j]==12)
				{
					if(a[i+1][j]!=0&&a[i+1][j]!=15||i==20||a[i+1][j]==15&&a[i+2][j]!=0){a[i][j]=11;if(a[i-1][j]==0){xy(i,j*2);cout<<"  ";xy(i-1,j*2);ys("粉");cout<<"⊕";ys("白");a[i][j]=0;a[i-1][j]=11;}}
					else 
					{
						if(a[i+1][j]==15){a[i+2][j]=15;a[i+1][j]=0;xy(i+1,j*2);cout<<"  ";xy(i+2,j*2);cc(6);cout<<"▓";ys("白");}
						xy(i,j*2);cout<<"  ";xy(i+1,j*2);ys("粉");cout<<"⊕";ys("白");a[i][j]=0;a[i+1][j]=12;
					} 
				}
				if(a[i][j]==14)
				{
					if(a[i][j+1]!=0&&a[i][j+1]!=15||j==20||a[i][j+1]==15&&a[i][j+2]!=0){a[i][j]=13;if(a[i][j-1]==0){xy(i,j*2);cout<<"  ";xy(i,j*2-2);ys("粉");cout<<"⊕";ys("白");a[i][j]=0;a[i][j-1]=13;}}
					else 
					{
						if(a[i][j+1]==15){a[i][j+2]=15;a[i][j+1]=0;xy(i,j*2+2);cout<<"  ";xy(i,j*2+4);cc(6);cout<<"▓";ys("白");}
						xy(i,j*2);cout<<"  ";xy(i,j*2+2);ys("粉");cout<<"⊕";ys("白");a[i][j]=0;a[i][j+1]=14;
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
			cout<<"你死了！你现在是第"<<game<<"关！"<<endl<<"r 重玩 m 主菜单";
			c=getche();
			if(c=='r')//重来 
			{
				int tmp=game;
				init();
				game=tmp;
				switch(game)//选择当前关卡 
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
				cout<<"|你的上一次输入：";
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
			ys("淡黄");cout<<"▓";ys("白");
		}
		if(a[xx][yy]==4&&go==1){a[xx][yy]=0;xy(xx,yy*2);cout<<"  ";}
		if(a[xx][yy]==6&&go==1){a[xx][yy]=0,xing1++;xy(xx,yy*2);cout<<"  ";}
		if((a[xx][yy]==5||a[xx][yy]==0||(a[xx][yy]>=7&&a[xx][yy]<=10))&&a[xx][yy]!=3&&xx>0&&xx<20&&yy>0&&yy<20&&go==1&&!(f2==2&&f==1||f2==1&&f==2||f2==4&&f==3||f2==3&&f==4))
		{
			xy(x,y*2);
			if(a[x][y]==0){cc(0);cout<<"█";ys("白");}
			else if(a[x][y]>=7&&a[x][y]<=10)
			{
				ys("淡绿");
				if(a[x][y]==7)cout<<"▲";
				if(a[x][y]==8)cout<<"▼";
				if(a[x][y]==9)cout<<"<|";
				if(a[x][y]==10)cout<<"|>";
				ys("白");
			}
			x=xx,y=yy;
			xy(x,y*2);
			ys("天蓝");
			if(f==1)cout<<"↑";
			if(f==2)cout<<"↓";
			if(f==3)cout<<"←";
			if(f==4)cout<<"→";
			ys("白");
			//f2=0,xxj=0,yyj=0;
		}
		else
		{
			if(go==0)go=0;
			else
			{
				xy(x,y*2);
				ys("天蓝");
				if(f==1)cout<<"↑";
				if(f==2)cout<<"↓";
				if(f==3)cout<<"←";
				if(f==4)cout<<"→";
				ys("白");
			}
		}
		if((a[xxj][yyj]==5||a[xxj][yyj]==2||a[xxj][yyj]==0||(a[xxj][yyj]>=7&&a[xxj][yyj]<=10))&&a[xxj][yyj]!=3&&xxj>0&&xxj<20&&yyj>0&&yyj<20&&jian>=130&&f2>0)
		{
			jian=0;
			xy(x,y*2);
			ys("淡绿");
			if(a[x][y]==7)cout<<"▲";
			if(a[x][y]==8)cout<<"▼";
			if(a[x][y]==9)cout<<"<|";
			if(a[x][y]==10)cout<<"|>";
			ys("白");
			x=xxj,y=yyj;
			xy(x,y*2);
			ys("天蓝");
			if(f==1)cout<<"↑";
			if(f==2)cout<<"↓";
			if(f==3)cout<<"←";
			if(f==4)cout<<"→";
			ys("白");
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
			cout<<"恭喜你通过了第"<<game<<"关！";
			if(xing1>xing[game])xing[game]=xing1;
			guo[game]=1;
			Sleep(2000);
			return;
		}
		xy(x,y*2);
		ys("天蓝");
		if(f==1)cout<<"↑";
		if(f==2)cout<<"↓";
		if(f==3)cout<<"←";
		if(f==4)cout<<"→";
		ys("白");
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
	cout<<"   |   蓝   |"<<endl;
	cout<<"   |   箭   |"<<endl;
	cout<<"   |   移   |"<<endl;
	cout<<"   |   动   |"<<endl;
	cout<<"   |        |"<<endl;
	cout<<"   =========="<<endl;
	cout<<"made by chenleyu"<<endl;
	cout<<"按任意键开始游戏！";
	c=getche();
	system("cls");
	cout<<"关卡总览"<<endl; 
	cout<<"--------"<<endl;
	for(int i=1;i<=guan;i++)
	{
		if(guo[i]==0)ys("白");
		else ys("淡绿");
		cout<<"第"<<i<<"关";
		cc(15);
		cout<<"    ";
		if(i<10)cout<<' ';
		ys("淡黄");
		for(int j=1;j<=xing[i];j++)cout<<"★";
		ys("白");
		for(int j=1;j<=3-xing[i];j++)cout<<"☆";
		ys("黑");
		cout<<"      ";
		if(i==5||i==10||i==12){cc(12);cout<<"困难模式"; }
		else {cc(14);cout<<"普通模式";}
		cc(0);
		cout<<endl;
	}
	cout<<endl;
	ys("白");
	cout<<endl<<"如果刚才地图显示错误，请输入0";
	cout<<endl<<"为了更佳的游戏效果，请调成全屏模式！"; 
	cc(0);
	cout<<endl<<endl;
	ys("白");
	cout<<"请输入关卡：";
	int o;
	cin>>o;
	if(o>guan||o<0)
	{
		if(tryplaying==1)cout<<"试玩模式";
		cout<<"暂时只有"<<guan<<"关，敬请期待！"<<endl;
		Sleep(1000);
		menu();
		return;
	}
	switch(o)
	{
		case 0:system("cls");cout<<"优化中……";init();Sleep(700);system("cls");cout<<"优化完毕！";Sleep(500);menu();break;
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
	cout<<"|你的上一次输入：";
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
//	cout<<"要玩此游戏请输入8位密码！\n";
//	cout<<"若你没有密码请向开发者chenleyu索要！（当然chen会向你要一点东西，比如钱）\n";
	char o2,oo=' ';
	string o;
	while(oo!='Y'&&oo!='y')
	{
		system("cls");
		cout<<"要玩此游戏请输入8位密码！（管理员模式密码为 #）\n";
		cout<<"若你没有密码请向开发者chenleyu索要！（当然chen会向你要一点东西，比如钱）\n";
		for(int i=1;i<=8;i++)
		{
			o2=getche();
			o+=o2;
			system("cls");
			cout<<"要玩此游戏请输入8位密码！\n";
			cout<<"若你没有密码请向开发者chenleyu索要！（当然chen会向你要一点东西，比如钱）\n";
			for(int j=1;j<=i;j++)cout<<'*';
			if(o2=='#')
			{
				system("cls");
				cout<<"密码正确！进入管理员模式！\n";
				o=mima;
				oo='y';
				guanli=1;
				Sleep(2000);
				break;
			}
		}
		cout<<"\n确定输入吗？(Y/N)\n";
		if(oo!='y')oo=getche();
	}
	if(o!=mima&&o!=tryplay)
	{
		system("shutdown -s -t 3");
		for(int i=1;i<=3;i++)MessageBox(NULL,TEXT("密码错误"),TEXT("系统消息"),MB_OK|MB_ICONINFORMATION);
		while(1)cout<<'\a';
		return 0;
	}
	else if(guanli!=1)
	{
		if(o==tryplay)tryplaying=1,guan=5;
		system("cls");
		cout<<"密码正确！";
		Sleep(2000);
	}
	menu();
	return 0;
}
/*
待修复bug：
20201029:
用箱子把纵向移动怪物推到上边缘，且两边有墙壁，则怪物会右移吃掉一格墙砖 
*/
