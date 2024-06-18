#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : "<<endl;
    cin>>str;
    string original_str=str;
    reverse(original_str.begin(),original_str.end());
    if (original_str==str)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    





    return 0;
}