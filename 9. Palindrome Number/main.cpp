#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0 || ((x % 10) == 0 && x != 0))
    {
        return false;
    }

    int revNum = 0;
    while (revNum < x)
    {
        revNum = (revNum * 10) + (x % 10);
        x /= 10;
    }

    return x == revNum || x == revNum / 10;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int x;
    cin >> x;
    cout << isPalindrome(x) << endl;
    return 0;
}