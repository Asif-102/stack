#include <bits/stdc++.h>
#include "stacks/MYSTACK.h"

using namespace std;
/*
stack of float, double, char
string, pair, structure, objects of class
*/
int main(void)
{
    // Stack<string> st;

    // st.push("akib");
    // st.push("ratan");
    // st.push("zohir");

    // while (!st.empty())
    //     cout << st.pop() << endl;

    // cout << st.size() << endl;
    // if (!st.empty())
    //     cout << st.Top() << endl; // st.Top() != -1

    Stack<pair <int, char>> st;
    st.push(make_pair(1, 'a'));
    st.push(make_pair(2, 'b'));
    st.push(make_pair(3, 'c'));

    while (!st.empty())
    {
        pair<int, char> chk;
        chk = st.pop();
        cout << chk.first << "|" << chk.second << endl;
    }

    cout << st.size() << endl;

    if(!st.empty())
    {
        pair<int, char> chk;
        chk = st.Top();
        cout << chk.first << "|" << chk.second << endl;
    }
    
}
