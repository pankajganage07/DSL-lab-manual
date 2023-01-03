/*
Department of Computer Engineering has student's club named 'Pinnacle Club'. Students of
second, third and final year of department can be granted membership on request. Similarly
one may cancel the membership of club. First node is reserved for president of club and last
node is reserved for secretary of club. Write C++ program to maintain club member‘s
information using singly linked list. Store student PRN and Name. Write functions to:
a) Add and delete the members as well as president or even secretary.
b) Compute total number of members of club
c) Display members
d) Two linked lists exists for two divisions. Concatenate two lists.
*/

#include <iostream>
using namespace std;
#define SIZE 120

//making node for linked list
class node{
    //private
        char name[SIZE];
        long prn;
        node * next;

    public:
        //constructor
        node(){
            prn = 0;
            next = NULL;
        }

      friend class list;
};

//list for storing data of pinaccle club
class list{

    private:
        node* president;
        node* secretary;
        node* current;
    
    public: 
        int count = 0;
        list(){
            president = new node;
            secretary = new node;
            current = new node;
        }

        void get_head(){
            count++;
            cout<<"enter name of president: ";
            cin>>president->name;
            cout<<"enter prn of president: ";
            cin>>president->prn;
            president->next = secretary;
        }

        void get_tail(){
            count++;
            cout<<"enter name of Secreatary: ";
            cin>>secretary->name;
            cout<<"enter prn of secretary: ";
            cin>>secretary->prn;
            secretary->next = NULL;
        }

        void display_members(){
            current = president;
            while(current->next != NULL){
                cout<<"Name: "<<current->name<<endl;
                cout<<"PRN: "<<current->prn<<endl;
                current = current->next;
            }
            cout<<"Name: "<<current->name<<endl;
            cout<<"PRN: "<<current->prn<<endl;

        }

        void add_members(){
            
        }


};

int main () {

 list l1;
//  l1.get_head();
//  l1.get_tail();
 l1.display_members();

    return 0;
}