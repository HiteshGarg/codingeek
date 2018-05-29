#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <int, int> frequency;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        
        // Incrementing the frequency
        frequency[num] ++;
    }
    
    for(auto i = frequency.begin(); i != frequency.end(); i++)
    {
        cout << i -> first << " : " << i -> second << endl;
    }
}
