#include <iostream>

using namespace std;

int main()
{
    int y;//yellow
    int g;//green
    int b;//blue
    int cy;//crystal yellow
    int cb;//crystal blue
    int a=0;//addition

    cout<<"Input Crystal Yellow then Blue: "<<endl;;
    cin>>cy>>cb;

    cout<<"Input Yellow, Green, Blue Balls: "<<endl;
    cin>>y>>g>>b;

    if (cy<(2*y+g))
    {
        a+=((2*y+g)-cy);
    }
    if (cb<(g+3*b))
    {
        a+=((3*b+g)-cb);
    }
    cout<<a;
    return 0;
}
