
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	
	int t;

	scanf(" %d",&t);
	while(t--)
	{
		long n;
		scanf(" %ld",&n);
        long a[n],x=0,sum=0;

		for (long i = 0; i < n; ++i)
		{
			/* code */
			scanf("%ld",&a[i]);
			sum+=a[i];

		}
			 
			sort(a,a+n);

			x= sum-(a[0] * n);

			printf("%ld",x); 

	}

	return 0;
}