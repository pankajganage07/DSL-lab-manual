//palindrome in simplest form
#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
#define SIZE 103

int main (){
    string str, stri;
    cout<<"enter a string to check palindrome: "<<endl;
    getline(cin,str);

    //reversing a string in stri
    string::reverse_iterator iter;
    for(iter=str.rbegin(); iter!=str.rend(); iter++){
        stri.push_back(*iter);
    }

    //printing original string
    for(int i = 0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    //printing reversed string
    for(int i = 0; i<stri.length(); i++){
        cout<<stri[i]<<" ";
    }
    cout<<endl;

    //comparing both strings
    if(str.compare(stri)==0){
        cout<<"strings are palindrome"<<endl;
    }
    else{
        cout<<"strings are not palindrome"<<endl;
    }


}