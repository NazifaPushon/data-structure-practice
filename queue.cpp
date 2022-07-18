#include <iostream>
using namespace std;
#define Q_SIZE 10


class queue{
    int data[Q_SIZE +1];
    int head = 0, tail = 0;
    public:

    void enqueue(int item){
        if((tail+1) % (Q_SIZE + 1) == head){
            cout << "the queue is full !" << endl;
            return;
        }
        data[tail] = item;
        tail = (tail +1 ) % (Q_SIZE + 1);
    }

    void dequeue(){
        int item;
        if(head == tail){
            cout << "The queue is empty !" << endl;
            return;
        }

        item = data[head];
        head = (head +1) % (Q_SIZE +1);
    }

    void printQueue(){
        if(head == tail){
            cout << "The queue is empty !" << endl;
            return;
        }
        for(int i = head; i < tail ; i++){
            cout << data[i] << endl;
        }
    }
};

int main(){
    queue new_queue;
    new_queue.enqueue(5);
    new_queue.enqueue(3);
    new_queue.enqueue(4);
    new_queue.enqueue(6);
    
    new_queue.dequeue();
    new_queue.dequeue();
    new_queue.printQueue();

    return 0;
}