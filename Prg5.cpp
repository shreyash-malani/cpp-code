#include <iostream>
#define MAX_SIZE 100 // Maximum size of the queue

using namespace std;

class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    void enqueue(int value) {
        if (!isFull()) {
            if (isEmpty()) {
                front = rear = 0;
            } else {
                rear = (rear + 1) % MAX_SIZE;
            }
            arr[rear] = value;
            cout << "Enqueued " << value << " into the queue." << endl;
        } else {
            cout << "Queue overflow. Cannot enqueue." << endl;
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            int removedValue = arr[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % MAX_SIZE;
            }
            cout << "Dequeued " << removedValue << " from the queue." << endl;
        } else {
            cout << "Queue underflow. Cannot dequeue." << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue: ";
        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << arr[rear] << endl;
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();
    queue.dequeue();
    queue.display();

    return 0;
}
