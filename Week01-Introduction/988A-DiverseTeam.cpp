#include <iostream>
#include <map>
using namespace std;

int main()
{
int n, k, r;
int counter=0;
/*n=number of students
k=size of team
r=input student's ranking*/
map<int, int> score;
map<int, int> ::iterator itr;
cin>>n>>k;
for(int i=1; i<=n; i++)//for untuk simpan index
{
    cin>>r;
    itr = score.find(r);
    if (itr!=score.end())
    {
        continue;
    }
    else{
        score.insert(pair <int,int> (r, i));
    }
}
if (score.size()>=k)
{
    cout<<"YES"<<endl;
    for(map<int, int> ::iterator itr = score.begin();itr!=score.end();itr++)
    {
        if (counter<k)
        {
        cout<<(*itr).second<<" ";
        counter++;
        }
    }

}
else{
    cout<<"NO"<<endl;
}
    return 0;
}
