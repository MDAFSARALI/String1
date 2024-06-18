#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string of even length : "<<endl;
    cin>>str;
    cout<<"The original string is "<<str<<endl;
    reverse(str.begin()+(int)((str.size())/2),str.end());
    cout<<"The second half reversed string is "<<str<<endl;
    return 0;
}