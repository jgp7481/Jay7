#include<iostream>
using namespace std;

int main()
{
    int n, a = 0, d = 0, flag = 0;
    string r;

    cin>>n;
    cin>>r;

    for(int i = 0; i < n; i++)
    {
        if(r[i] == 'A') a++;
        else if (r[i] == 'D') d++;
        else flag = 1;
    }
    if(flag) cout << "Invalid input..";
    else
    {
        if(a>d)cout<<"Anton";
        else if(d>a)cout<<"Danik";
        else cout<<"Friendship";
    }
}