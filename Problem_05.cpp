#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string :" << endl;
    cin >> str;
    int val = 0, pw = 1;
    while (str.size())
    {
        val += pw * (str.back() - '0');
        // In the above line back() function is used as the modulo function returns the last digit
        str.pop_back();
        pw *= 10;
    }
    cout << val;

    return 0;
}