#include<bits/stdc++.h>
using namespace std;

void explainVectors()
{
    vector<int> v; // similar to array but dynamic in nature, extendible

    v.push_back(1); // pushes element into vector at the end
    v.emplace_back(3); // same as push_back but it is more faster

    vector<pair<int, int>> vec;

    vec.push_back({1, 3});
    vec.emplace_back(1,3); // by default if we pass two numbers it considers them as pair

    vector<int> v(5, 100); // creates a vector of [100, 100, 100, 100, 100]
    vector<int> v(5); // creates a vector of [0, 0, 0, 0, 0] or of garbage
    vector<int> v1(5, 20); // creates a vector of [20, 20, 20, 20, 20]
    v1.push_back(1); // also works here, vector v1 becomes [20, 20, 20, 20, 20, 1]

    vector<int> v2(v1); // v1 is copied to v2

    // iterating through a loop
    vector 

    return ;
}

int main()
{
    explainVectors();
    return 0;
}