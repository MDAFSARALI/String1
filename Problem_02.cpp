#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the string : " << endl;
    cin >> n;
    string str;
    cout << "Enter your string : " << endl;
    cin >> str;
    int vowels = 0;
    for (int i = 0; i < (int)(str.size()); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
    }
    cout << "Total no of consonants are :" << (n - vowels) << endl;

    return 0;
}