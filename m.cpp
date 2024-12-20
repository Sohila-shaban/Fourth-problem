#include <iostream>
#include <string>
using namespace std;
main()
{
    int n;
    bool e = 0;
    cin >> n;
    int a[n];
    int x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i;
            e = 1;
            break;
        }
    }
        if (!e)
    {
        cout << "-1";
    }
}