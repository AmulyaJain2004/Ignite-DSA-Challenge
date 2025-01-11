#include<bits/stdc++.h>
using namespace std;

void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // nesting the pairs
    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.second << " " << q.second.first << endl;

    // pair arrays
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;

    return ;
}

int main()
{
    explainPairs();
    return 0;
}