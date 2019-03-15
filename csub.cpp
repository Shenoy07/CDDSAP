#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
     long long int n;
     cin>>n;
     char a[n];
     cin>>a;
     long long int c = 0;
     for(long long int i=0;i<n;i++){
         if(a[i]=='1')
         c++;
     } 
        c = c*(c+1)/2;
        cout << c <<endl;
    }
 return 0;
}