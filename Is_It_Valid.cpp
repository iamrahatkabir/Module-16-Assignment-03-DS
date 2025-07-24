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
    int n; cin >> n;

    while(n--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for(char c : s)
        {
            if(st.empty() && c == '0')
            {
                st.push(c);
            }
            else if(st.empty() && c == '1')
            {
                st.push(c);
            }
            else if(!st.empty() && c == '0')
            {
                if(st.top() == '1')
                {
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
            else if(!st.empty() && c == '1')
            {
                if(st.top() == '0')
                {
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }
        if(st.empty())
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}