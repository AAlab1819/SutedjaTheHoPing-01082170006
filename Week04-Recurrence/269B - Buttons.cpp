#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    //algorithm
    cout<<(n - 1) * n * (n + 1) / 6 + n << endl;
    return 0;
}
