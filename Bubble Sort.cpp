//importing the dependencies
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,temp,c=0;
    cin >> n;
   int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
            {
            if(a[j]>a[j+1])
                {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c++;
            }
        }
    
    if(c==0)
        {
        break;
    }}
    cout<<"Array is sorted in "<<c<<" swaps."<<endl;
    cout<<"First Element is:"<<" "<<a[0]<<endl;
    cout<<"Last Element is:"<<" "<<a[n-1]<<endl;
    return 0;
}
