int map8[21][21]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,6,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,15,0,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,15,0,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,15,0,0,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,15,0,0,0,13,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,15,0,0,0,0,13,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,1,1,12,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,0,1,1,0,0,0,2,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,0,2,2,2,8,2,2,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,0,2,0,13,0,6,2,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,0,2,8,9,2,2,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,0,2,14,0,0,2,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,8,6,2,10,8,2,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,2,9,2,2,0,13,2,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,2,0,0,2,0,5,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
void g8(int a[21][21],int &b,int &c)
{
	for(int i=0;i<21;i++)
	{
		for(int j=0;j<21;j++)
		{
			a[i][j]=map8[i][j];
		}
	}
	b=2,c=2;
}
