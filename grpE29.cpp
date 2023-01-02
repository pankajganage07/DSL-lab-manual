/*

E29: Queues are frequently used in computer programming, and a typical example is the creation
of a job queue by an operating system. If the operating system does not use priorities, then
the jobs are processed in the order they enter the system. Write C++ program for simulating
job queue. Write functions to add job and delete job from queue

*/

#include <iostream>
using namespace std;
#define MAX 120

class queue{
    int data[MAX],front,rear;

    public: 
        queue(){
            front = -1;
            rear = -1;
        }

        bool isfull();
        bool isempty();
        void enqueue(int);
        void delqueue();
        void display();
};

bool queue::isempty(){
    if(front==rear){
        return 1;
    }
    else {
        return 0;
    }
}

bool queue::isfull(){
    if(rear ==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

void queue::enqueue(int x){
    rear++;
    data[rear] = x;
}

void queue::delqueue(){
    front++;
}

void queue::display(){
    int i;
    cout<<endl;
    for(i=front+1; i<=rear; i++){
        cout<<data[i]<<" ";
    }
}




int main () {
queue Q;
int x;
//menu
int choice =0;
do{
    cout<<"menu"<<endl;
    cout<<"1.insert job"<<endl;
    cout<<"2.delete job"<<endl;
    cout<<"3.display"<<endl;
    cout<<"4.exit"<<endl;
    cout<<"enter choice: "<<endl;
    cin>>choice;



switch (choice)
{
case 1:
        if(Q.isfull()){
            cout<<"queue is full"<<endl;
        }
        else{
            cout<<"enter data: ";
            cin>>x;
            Q.enqueue(x);
        }
    break;

case 2:
        if(Q.isempty()){
            cout<<"queue is already empty"<<endl;
        }
        else{
            Q.delqueue();
        }
        break;

case 3:
         if(Q.isempty()){
            cout<<"queue is already empty, nothing to display"<<endl;
        }
        else{
            Q.display();
        }
        break;

case 4:
        cout<<"thanks "<<endl;
        break;
default:
    break;
}

}while(choice != 4);

return 0;
  
}