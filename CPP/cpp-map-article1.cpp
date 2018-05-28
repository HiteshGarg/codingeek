#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    //Defining the map with key as a string and value as an integer
    map <string, int> mape;
    
    //Number of strings
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        
        string input;
        cin >> input;
        
        //Incrementing the count of inputted string
        mape[input]++;
    }
    
    
    //Traversing the map
    for(auto i = mape.begin(); i != mape.end(); i++)
    {
        
        // first value denoted the key while second denotes the value
        cout << i->first << " : " << i->second << '\n';
    }
}
