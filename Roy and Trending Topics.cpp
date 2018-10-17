#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

struct trending{
    int id;
    int zNew;
};

void heapify(vector<trending> &myVector, long long int n, long long int i)
{
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // If left child is smaller than root
    if (l < n && myVector[l].id < myVector[smallest].id)
        smallest = l;

    // If right child is smaller than smallest so far
    if (r < n && myVector[r].id < myVector[smallest].id)
        smallest = r;

    // If smallest is not root
    if (smallest != i) {
        swap(myVector[i], myVector[smallest]);

        // Recursively heapify the affected sub-tree
        heapify(myVector, n, smallest);
    }
}

// main function to do heap sort
void heapSort(vector<trending> &myVector, long long int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(myVector, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(myVector[0], myVector[i]);

        // call max heapify on the reduced heap
        heapify(myVector, i, 0);
    }
}
int main()
{
    long long int testCase;
    long long int topicId;
    long long int oldZScore;
    long long int posts;
    long long int like;
    long long int comment;
    long long int share;
    long long int newZScore;
    map<int, vector<trending> >myMap;

    cin>>testCase;
    while (testCase--)
    {
        cin>> topicId >> oldZScore >> posts >> like >> comment >> share;
        posts = posts * 50LL;
        like = like * 5LL;
        comment = comment * 10LL;
        share = share * 20LL; //LL is for big numbers, essential if dealing with really large numbers
        newZScore = posts + like + comment + share;

        trending Trending;
        Trending.id = topicId;
        Trending.zNew = newZScore;

        myMap[newZScore - oldZScore].push_back(Trending);
    }

    map<int, vector<trending> >::iterator it;

    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        heapSort(it->second, it->second.size());
    }

    cout<<endl;

    int counter = 1;
    for (it = myMap.end(); it!= myMap.begin(); it--)
    {
        for (int i=0; i<it->second.size(); i++)
        {
            cout<<it->second[i].id<<" "<<it->second[i].zNew<<endl;
            if (++counter > 5)
            {
                break;
            }
        }
        if (counter > 5)
        {
            break;
        }
    }

}
