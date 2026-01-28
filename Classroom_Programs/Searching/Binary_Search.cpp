#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    vector <int> num = {3,5,10,6,8};
    // for (int i=0; i<num.size(); i++)
    for (int var : num)
    {
        // cout << num[i] <<"\n";
        // cout << num.at(i) <<"\n";
        cout << var << endl;
    }
    int n;
    cout << "The required number is - ";
    cin >> n;


    sort (num.begin(), num.end());
    if (binary_search(num.begin(), num.end(), n))
    {
        cout << "Element Found";
    }
    else 
    {
        cout << "Element Not Found";
    }

    

    // int end = {num.size()-1}, start = 0;
    // while (start<=end)
    // {
    //     int mid = (start+end)/2;
    //     if (num[mid]==n)
    //     {
    //         cout << "Element found";
    //         break;
    //     }
    //     else if (n<num[mid])
    //     {
    //         end = mid-1;
    //     }

    //     else 
    //     {
    //         start = mid+1;
    //     }
    // }
    
    // if (start >= end)
    // {
    //     cout << "Element Not Found";
    // }
}