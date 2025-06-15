#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;

    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i + 1);
    }

    for (auto itr = v1.begin(); itr != v1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    cout << "The Front Element " << v1.front() << endl;   // Returns refrence of first element
    cout << "The Last Element " << v1.back() << endl;     // Returns refrence of last element
    cout << "size of vector " << v1.size() << endl;       // size of vector
    cout << "Last Element " << v1[v1.size() - 1] << endl; // Last Element
    v1.pop_back();
    cout << "last element deleted" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    auto itr = v1.begin();
    cout << "insert 5 at first" << endl;
    v1.insert(itr, 5);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    v1.erase(itr);
    cout << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    if (v1.empty())
        cout << "\nvector is empty";
    else
        cout << "\nvector is not empty" << endl;
    cout << "size of vector: " << v1.size() << endl;
    v1.clear();
    cout << "Size of the vector after clearing the vector: " << v1.size();
    return 0;
}