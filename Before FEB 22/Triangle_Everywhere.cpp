#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>0&&b>0&&c>0&&a+b>c&&b+c>a&&c+a>b) {
    if(a==b&&b==c)
    {
        cout<<"1";
    }
    else if (a==b||b==c||c==a)
    {
        cout<<"2";
    }
    else 
    {
        cout<<"3";
    }
    }
    else
    {
        cout<<"-1";
    }
    
    return 0;
}