// enqueue() --->push
// dequeue() --->pop
// peek() ---->top element
// empty() --->empty queue or not
// front and back pointers
// Array Implementation
#include<iostream>
using namespace std;

#define n 20

class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x){
        if(back == n-1){
            cout<<"Overflow"<<endl;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void dequeue(){
        if(front == -1 || front>back){
            cout<<"No element in Queue"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front == -1 || front>back){
            cout<<"No element in Queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        if(front == -1 || front>back){
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();

    cout<<q.peek()<<endl;
    q.dequeue();


return 0;
}