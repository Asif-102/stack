#include <bits/stdc++.h>
#include "stacks/MYSTACK.h"

using namespace std;
/*
stack of float, double, char
string, pair, structure, objects of class
*/

int globalID = 100;

class person
{
    string name;
    int id;
    float salary;

public:
    person()
    {
        name = "";
        id = -1;
        salary = -1.0;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
    }

    person(string name, float salary)
    {
        setName(name);
        setSalary(salary);

        id = globalID;
        globalID++;
    }

    int getID()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    float getSalary()
    {
        return salary;
    }

    void print()
    {
        cout << name << " | " << id << " | " << salary << endl;
    }
};

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

    // Stack<pair <int, char>> st;
    // st.push(make_pair(1, 'a'));
    // st.push(make_pair(2, 'b'));
    // st.push(make_pair(3, 'c'));

    // while (!st.empty())
    // {
    //     pair<int, char> chk;
    //     chk = st.pop();
    //     cout << chk.first << "|" << chk.second << endl;
    // }

    // cout << st.size() << endl;

    // if(!st.empty())
    // {
    //     pair<int, char> chk;
    //     chk = st.Top();
    //     cout << chk.first << "|" << chk.second << endl;
    // }

    Stack<person> st;
    person a("abdur rahim", 654.6);
    person b("ria akter", 566.8);
    person c("farid ahmed", 631.3);

    st.push(a);
    st.push(b);
    st.push(c);

    // while(!st.empty())
    // {
    //     person printObj;
    //     printObj = st.pop();
    //     printObj.print();
    // }

    person personObj;
    personObj = st.Top();
    personObj.print();
}
