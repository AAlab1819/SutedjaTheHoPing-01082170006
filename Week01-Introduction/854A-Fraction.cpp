#include <iostream>

using namespace std;

int main()
{
    int numerator, denominator,number;
    cin>>number;
    //kalau genap
    if(number%2==0)
    {
        numerator = ((number/2)-1);
        denominator = ((number/2)+1);
    if(numerator%2==0 && denominator%2==0)//kalau di genap masih reducible
    {
        numerator--;
        denominator++;
    }
    }
    //kalau ganjil
    if(number%2==1)
    {
        numerator = ((number/2));
        denominator = (number - numerator);
    }
    cout<<numerator<<" "<<denominator;
    return 0;
}
