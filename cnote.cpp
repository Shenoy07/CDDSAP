#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	
	int t;

	cin>>t;

	while(t--)
	{
		int x,y,k,n,c,p,pn;

		bool found = false;

		scanf("%d %d %d %d",&x,&y,&k,&n);
		
		pn=x-y;

		for (int i = 0; i < n;i++)
		{
			scanf("%d",&p);
			scanf("%d",&c);
			
			if(pn <= p && c<=k){
				found = true;
			}		
			}
			if(found==true)
				printf("LuckyChef\n");
			else
				printf("UnluckyChef\n");
		}
	return 0;
}