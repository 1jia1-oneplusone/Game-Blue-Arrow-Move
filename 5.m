int map5[21][21]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,1,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,8,8,8,8,1,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,8,8,8,8,1,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,8,8,8,8,1,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,2,8,2,8,1,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,8,6,8,8,1,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,2,2,8,8,1,14,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,8,8,2,8,1,14,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,8,8,8,8,1,1,6,1,0,0,0,0,0,0,0,0,0,0,0},
{0,1,8,2,8,8,1,2,9,1,0,0,0,0,0,0,0,0,0,0,0},
{0,1,8,8,8,2,1,2,9,2,2,2,2,2,0,0,0,0,0,0,0},
{0,1,8,8,8,8,1,1,10,7,7,7,9,2,1,5,1,1,0,0,0},
{0,1,8,8,2,8,1,1,10,7,7,7,8,2,1,0,1,6,1,0,0},
{0,1,8,8,8,8,1,1,7,7,1,1,8,2,1,0,8,9,1,0,0},
{0,1,8,2,8,8,1,1,7,7,1,1,10,2,0,1,10,9,1,0,0},
{0,1,8,8,8,8,0,0,7,7,1,1,10,2,0,1,0,1,1,0,0},
{0,1,2,2,2,2,2,1,1,1,1,1,10,2,2,2,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,0,8,8,8,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
void g5(int a[21][21],int &b,int &c)
{
	for(int i=0;i<21;i++)
	{
		for(int j=0;j<21;j++)
		{
			a[i][j]=map5[i][j];
		}
	}
	b=2,c=2;
}
