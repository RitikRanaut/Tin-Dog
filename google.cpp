#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, c, d;
    int count = 0;
    cin>>n>>c>>d;
    vector<int> vec1(n);
    vector<int> vec2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>vec2[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if((vec1[i] - vec2[j] + c) <= (vec2[i] - vec2[j] + d)){
                count++;
            }
        }
        
    }
    cout<<count<<endl;
    return 0;
}