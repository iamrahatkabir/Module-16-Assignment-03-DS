#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    while(n--)
    {
        int val; cin >> val;
        st.push(val);
    }

    queue<int> q;
    while(m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool equal = true;

   if(st.size() == q.size())
   {
    while(!st.empty()){
        if(st.top() != q.front())
        {
            equal = false;
        }
        st.pop();
        q.pop();
    }
   }
   else
   {
    equal = false;
   }

   if(equal)
    cout << "YES" << endl;
   else
    cout << "NO" << endl;


    return 0;
}