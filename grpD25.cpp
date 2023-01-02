/*

D25: A palindrome is a string of character that‘s the same forward and backward. Typically,
punctuation, capitalization, and spaces are ignored. For example, “Poor Dan is in a droop” is
a palindrome, as can be seen by examining the characters “poor danisina droop” and
observing that they are the same forward and backward. One way to check for a palindrome
is to reverse the characters in the string and then compare with them the original-in a
palindrome, the sequence will be identical. Write C++ program with functionsa) To print original string followed by reversed string using stack
b) To check whether given string is palindrome or not

*/


#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#define SIZE 100    

//creating my own stack , predefinded is not used
class stack{
    char nm[SIZE];
    int top;

    public:
        stack(){
            top = -1;
        }
        void push(char ch);
        char pop();
        bool isempty();
        bool isfull();
        void playitem();
        bool ispalindrome();

};

void stack::push(char ch){
    if(isfull()){
        cout<<"stack is full "<<endl;
    }
    else{
        top++;
        nm[top] = ch;
    }
    
}

char stack::pop(){
    if(isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        char temp;
        temp = nm[top];
        top--;
        return temp;
    }
}

bool stack::isempty(){
    if(top == -1){
        return 1;
    }
    return 0;
}

bool stack::isfull(){
    if(top == (SIZE - 1)){
        return 1;
    }
    return 0;
}

void stack::playitem(){
    for(int i = top; i>=0; i--){
        cout<<nm[i]<<" ";
    }

}

bool stack::ispalindrome(){
    char name[SIZE];

    int i,j;
    for(i=top, j=0; i>=0; i--,j++){
        name[j] = nm[i];

    }
    name[j]= '\0';

    if(strcmp(name,nm) == 0){
		cout<<"\n\nString is palindrome...";}
	else
		cout<<"\n\nString is not palindrome...";
}



int main () {
    
    string str, stri;
    cout<<"Enter string to check for palindrome: ";
    cin>>str;
    //converting everything to apha numeric
    for(int i = 0; i<str.length(); i++){
        if(isalnum(str[i])){
            stri.push_back(str[i]);
        }
    }
    
    //converting everything to lowercas
    str.clear();
    for(int i = 0; i<stri.length(); i++){
        str.push_back(tolower(stri[i]));
    }


    // //printing str
    // for(int i = 0; i<str.length(); i++){
    //     cout<<str[i]<<" ";
    // }

    stack s1;
    stack s2;
    stack s3;
    for(int i = 0; i<str.length(); i++){
        s1.push(str[i]);
    }

    //reversing a string using stack
    s3 = s1;
    while(!s3.isempty()){
        s2.push(s3.pop());
    }

    //now we have org string in s1 and reversed string in s2
    //printing both

    s1.playitem();
    cout<<endl;
    s2.playitem();
    
    //comparing both stack for checking palindrome
    s1.ispalindrome();
    
    


    return 0;
}