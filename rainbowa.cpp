#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

	int t;
	scanf(" %d",&t);

	while(t--){

		int n;
		scanf(" %d",&n);
		int a[n];
		bool done;

		for (int i = 0; i < n; i++)
		{
			scanf(" %d",&a[i]);
		}
			int x = n-1;

		for(int i=0;i<n/2;i++)
		{
			bool done = false;
			if(a[i] != a[x-i])
				done = true;
			else
				break;
		}

		if(done == true)
			{
				printf("no");
			}
		else
			{
				printf("yes");
			}
	}

 return 0;
}