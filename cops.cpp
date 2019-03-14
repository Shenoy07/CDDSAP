#include<iostream>

using namespace std;

int main()
{
    int t,m,x,y,z,k;
   
    cin >> t;
    while(t--){

        int c=0;
        int a[101];
        for(int i=0;i<101;i++)
            a[i]=0;

        cin >> m >> x >> y;
        z=x*y;
            int n;
        for(int i=0;i<m;i++)
        {
            cin>>n;
            a[n]=1;
            for(int j=n-1,k=0;j>0 && k<z;j--,k++)
                    a[j]=1;

                    for(int j=n+1,k=0;j<101 && k<z;j++,k++)
                    {
                        a[j]=1;
                    }
        }
                    for(int i=1;i<101;i++)
                    {
                        if(a[i]==0)
                            c++;
                    }
        
            cout<< c <<"\n" ;
    }
    return 0;
}