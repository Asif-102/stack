#include <bits/stdc++.h>
#include "stacks/MYSTACK.h"

using namespace std;
/*
stack of float, double, char
string, array, structure, objects of class
*/
int main(void)
{
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    while (!st.empty())
        cout << st.pop() << endl;
    
    cout << st.size() << endl;
    if(!st.empty())
        cout << st.Top() << endl; // st.Top() != -1
}
