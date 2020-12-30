#include<bits/stdc++.h>
using namespace std;
void twoLargestElements(vector<int> ar)
{
    vector<int>::iterator j;
    sort(ar.begin(),ar.end());
    ar.pop_back();
    ar.pop_back();
    for(j = ar.begin();j!=ar.end();j++)
        cout << *j << " ";
}

int main()
{
    int n,testcases;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0;i<n;i++)
        cin >> ar[i];
    twoLargestElements(ar);
    return 0;

}
