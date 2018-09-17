#include <iostream>

using namespace std;

int main()
{
    int k;//punched dragon
    int l;//tail shut dragon
    int m;//paws trampled dragon
    int n;//threatened dragon
    int d;//total dragon
    int counter=0;

    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    //kalau ada yang 1 otomatis kehitung semua
    if(k==1 || l==1 || m==1 || n==1)
    {
        d==counter;
    }
    //kalau tidak ada 1
    for (int i=1; i<=d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
