int map3[21][21]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,3,1,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,1,1,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,3,1,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,1,1,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,3,1,1,0,2,0,1,1,1,1,1,1,1,0,0,0,0,0,0},
{0,1,0,0,0,0,2,2,1,4,0,3,0,5,1,0,0,0,0,0,0},
{0,1,0,1,1,3,2,0,0,0,4,3,0,4,1,0,0,0,0,0,0},
{0,1,0,0,0,0,2,6,1,0,0,4,1,0,1,1,1,1,1,1,0},
{0,1,3,1,1,0,2,1,1,3,3,4,1,0,4,4,0,4,1,1,0},
{0,6,0,0,0,0,0,0,0,0,3,0,1,0,3,4,4,3,0,6,0},
{0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,4,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
void g3(int a[21][21],int &b,int &c)
{
	for(int i=0;i<21;i++)
	{
		for(int j=0;j<21;j++)
		{
			a[i][j]=map3[i][j];
		}
	}
	b=2,c=2;
}
