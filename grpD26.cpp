/*

D26: In any language program mostly syntax error occurs due to unbalancing delimiter such as
(),{},[]. Write C++ program using stack to check whether given expression is well
parenthesized or not.

*/

#include <iostream>
#include <stack>
using namespace std;
#define SIZE 105

int main (){
    cout<<"enter the expression: "<<endl;
    char exp[SIZE];
    cin.getline(exp,SIZE,'$');
    cout<<"your entered expression is: "<<endl;
    int i = 0;
    while(exp[i] != '\0'){
        cout<<exp[i];
        i++;
    }

    stack<char> s1;
    int j = 0;
    int flag = 0;
    char ch;
    while(exp[j] != '\0'){
        if(exp[j]=='('||exp[j]=='['||exp[j]=='{'){
            s1.push(exp[j]);
        }
        else if(exp[j]==')'||exp[j]==']'||exp[j]=='}'){
                ch = s1.top();
                s1.pop();
                if((exp[j]==')'&&ch != '(')||(exp[j]==']'&&ch != '[')||(exp[j]=='}'&&ch != '{')){
                    flag = 1;
                    break;
                }
        }
        j++;
    }
    
    

    if(s1.empty() == 1 && flag == 0){
        cout<<"expression is okay"<<endl;
    }
    else{
        cout<<"expression not okay"<<endl;
    }

    


    return 0;
}