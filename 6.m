int map6[21][21]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,6,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,1,0,0,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,10,2,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,0,3,8,1,0,0,1,6,1,0,0,0,0,0,0,0,0,0,0,0},
{0,1,4,2,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,0,1,14,4,0,1,0,0,0,0,0,0,0,0,0,0},
{0,0,3,1,1,1,1,1,9,1,1,1,1,1,0,0,0,0,0,0,0},
{0,0,0,4,13,1,11,0,11,0,11,0,0,1,0,0,0,0,0,0,0},
{0,1,4, 0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
{0,1,11,1,0,0,0,12,0,12,0,12,0,1,0,0,0,0,0,0,0},
{0,0,1,0,1,1,1,1,1,1,1,1,8,1,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,8,1,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,8,1,1,1,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,8,1,0,11,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,6,8,0,0,0,0,5,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,2,1,1,1,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
void g6(int a[21][21],int &b,int &c)
{
	for(int i=0;i<21;i++)
	{
		for(int j=0;j<21;j++)
		{
			a[i][j]=map6[i][j];
		}
	}
	b=2,c=2;
}
