#include <bits/stdc++.h>

using namespace std;

int ans = 0;
int keyCount = 0;
char museumSize[1000][1000];
int answer[1000000] = {0};
int key[1000][1000] = {0};
int maxX, maxY;
void floodFill(int x, int y)
{
    if(x < 0 || x >= maxX || y < 0 || y >= maxY) return;
    if(key[x][y] != 0) return;
    if(museumSize[x][y] == '*')
    {
        ans++;
        return;
    }
    key[x][y] = keyCount;
    floodFill(x-1, y);
    floodFill(x+1, y);
    floodFill(x, y-1);
    floodFill(x, y+1);
    return;
}
int main()
{
    int testCase, testRow, testCol;
    cin >> maxX >> maxY >> testCase;
    for(int i = 0; i < maxX; i++)
    {
        for(int j = 0; j < maxY; j++)
        {
            cin >> museumSize[i][j];
        }
    }
    for(int i = 0; i < maxX; i++)
    {
        for(int j = 0; j < maxY; j++)
        {
            if(museumSize[i][j] == '.' && key[i][j] == 0)
            {
                keyCount++;
                ans = 0;
                floodFill(i,j);
                answer[keyCount] = ans;
            }
        }
    }
    for(int x = 0; x < testCase; x++)
    {
        cin >> testRow >> testCol;
        cout << answer[key[testRow-1][testCol-1]] << endl;
    }
    return 0;
}
