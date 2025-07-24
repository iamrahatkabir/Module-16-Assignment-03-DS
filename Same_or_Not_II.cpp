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

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    myStack st;
    myQueue q;

    while (n--)
    {
        int val;
        cin >> val;

        st.push(val);
    }

    while (m--)
    {
        int val;
        cin >> val;

        q.push(val);
    }

    bool equal = true;

    if (st.size() == q.size())
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
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

    if (equal)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}