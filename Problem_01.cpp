#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the string :"<<endl;
    cin>>n;
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    cout<<"The Original string is : "<<str<<endl;
    for (int i = 0; i < (int)(str.size()); i++)
    {
        if (i%2!=0)
        {
          str[i]='#';
        }
        
    }
    cout<<"The desire string is : "<<endl;
    cout<<str;

    return 0;
}