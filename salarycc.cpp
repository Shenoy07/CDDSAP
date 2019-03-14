#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a[n],result=0,sum=0;
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        result = sum-(a[0]*n);
        cout<<result<<endl;
    }
    return 0;
}
