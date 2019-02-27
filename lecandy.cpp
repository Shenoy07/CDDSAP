#include<iostream>

using namespace std;

int main()
{
	int n,c,T,i,t,a;

	cin>>T;

	for(int t=0;t<T;++t){

		cin>>n;
		cin>>c;

		for (int i = 0; i < n; i++)
		{
			/* code */
			cin >>a;
			c = c-a;
		}
		cout<<(c < 0 ? "No" : "Yes" )<<endl;

	}

	
	
	return 0;
}