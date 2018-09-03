#include <iostream>

using namespace std;

int main()
{
    long long y;//yellow
    long long g;//green
    long long b;//blue
    long long cy;//crystal yellow
    long long cb;//crystal blue
    long long a=0;//addition


    cin>>cy>>cb;


    cin>>y>>g>>b;

    if (cy<(2*y+g))
    {
        a+=((2*y+g)-cy);
    }
    if (cb<(g+3*b))
    {
        a+=((g+3*b)-cb);
    }
    cout<<a;
    return 0;
}
