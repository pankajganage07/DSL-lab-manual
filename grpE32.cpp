/*

E32: Pizza parlor accepting maximum M orders. Orders are served in first come first served basis.
Order once placed cannot be cancelled. Write C++ program to simulate the system using
circular queue using array.

*/

#include <iostream>
using namespace std;
#define MAX 50

class pizzap{
    int front,rear;
    int orders[MAX];
    public:
        pizzap(){
            front = -1;
            rear = -1;
        }
        bool add_order(int data);
        void serve_order();
        void display_order();
};

bool pizzap::add_order(int data){
    if(front ==-1 && rear == -1){
        front++;
        rear++;
        orders[rear]=data;
        return true;
    }
    else{
        int pos = (rear+1)%MAX;
        if(pos == front){
            cout<<"\n cafe is full. plz wait"<<endl;
            return false;
        }
        else{
            rear = pos;
            orders[rear] = data;
            return true;
        }
    }
}


void pizzap::serve_order(){
    if(front==-1){
        cout<<"no orders to serve"<<endl;
        return;
    }
    else{
        cout<<"order is procedded: "<<orders[front]<<endl;
        if(front==rear){
            front = rear = -1;
        }
        else{
            front=(front+1)%MAX;
        }
    }
}

void pizzap::display_order(){
    int i = 0;
    if(front == -1){
        cout<<"no orders to display"<<endl;
        return;
    }
    else{
        cout<<"orders id"<<endl;
        for(i = front; i!=rear; i= (i+1)%MAX){
            cout<<orders[i]<<endl;
        }
        cout<<orders[rear]<<endl;
    }
}

int main (){

  pizzap p1;
  int id;
  int choice = 0;
  do{
    cout<<"menu"<<endl;
    cout<<"1. add order"<<endl;
    cout<<"2. serve order"<<endl;
    cout<<"3. display order"<<endl;
    cout<<"4. exit"<<endl;
    cout<<"enter your choice: "<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
            cout<<"enter order id"<<endl;
            cin>>id;
            p1.add_order(id);
        break;
    case 2: 
            p1.serve_order();
            break;
    case 3: 
            p1.display_order();
            break;
    case 4:
            break;

    default:
        cout<<"invalid choice"<<endl;
        break;
    }

  }while(choice != 4);
    return 0;
}