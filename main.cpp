#include <bits/stdc++.h>
#include "stacks/MYSTACK.h"

using namespace std;
/*
stack of float, double, char
string, pair, structure, objects of class
*/
int main(void)
{
    Stack<float> st;

    st.push(1.6);
    st.push(2.7);
    st.push(3.99);

    while (!st.empty())
        cout << st.pop() << endl;

    cout << st.size() << endl;
    if (!st.empty())
        cout << st.Top() << endl; // st.Top() != -1
}
