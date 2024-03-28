#include <iostream>

class Queue {
private:
    int *arr;       // Array to store elements
    int capacity;   // Maximum capacity of the queue
    int front;      // Index of the front element
    int rear;       // Index of the rear element
    int size;       // Current number of elements in the queue

public:
    // Constructor to initialize the queue
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    // Destructor to free dynamically allocated memory
    ~Queue() {
        delete[] arr;
    }

    // Function to enqueue an element into the queue
    void enqueue(int x) {
        if (size == capacity) {
            std::cout << "Queue is full. Cannot enqueue.\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
        std::cout << x << " enqueued into the queue.\n";
    }

    // Function to dequeue an element from the queue
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        int dequeuedItem = arr[front];
        front = (front + 1) % capacity;
        size--;
        std::cout << dequeuedItem << " dequeued from the queue.\n";
    }

    // Function to get the front element of the queue
    int getFront() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return -1;
        }
        return arr[front];
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Function to get the size of the queue
    int getSize() {
        return size;
    }
};

int main() {
    Queue myQueue(5); // Create a queue with capacity 5

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.enqueue(40);
    myQueue.enqueue(50);

    std::cout << "Front element: " << myQueue.getFront() << std::endl;

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue(); // Trying to dequeue from an empty queue

    return 0;
}
