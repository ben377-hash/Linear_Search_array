#include <iostream>
#include <vector>
using namespace std;

bool linear(const vector<long int>& a, int key)
{
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main() {
    vector<long int> a;
    int n;
    cout << "Enter the size";
    cin >> n;
    a.resize(n);
    int key;
    cout << "Enter the elements :\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key :";
    cin >> key;
    bool x = linear(a, key);
    if(!x)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}


