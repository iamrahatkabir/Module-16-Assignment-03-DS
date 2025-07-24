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
    queue<string> q;

    while(n--)
    {

        int val; 
        cin >> val;
        // cout << val << endl;

        if(val == 0)
        {
            string who; cin >> who;
            // cout << who;
            q.push(who);
        }
        else
        {
            if(q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}