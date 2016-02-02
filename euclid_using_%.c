# include <stdio.h>

int gcd(int u, int v)
{
	int t;
	while(u>0)
	{
		if(u<v)
		{
			t=v;
			v=u;
			u=t;
		}
		u = u % v;

	}
	
	return v;
}

int main()
{
	int x,y,g;
	printf("enter two numbers : ");
	scanf("%d %d",&x,&y);
	printf("\n gcd is :  ");
	g = gcd(x,y);
	printf("%d",g);
	return 0;

}