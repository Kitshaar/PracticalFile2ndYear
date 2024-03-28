#include <iostream>

class CircularQueue
{
private:
    int *arr;     // Array to store elements
    int capacity; // Maximum capacity of the queue
    int front;    // Index of the front element
    int rear;     // Index of the rear element
    int size;     // Current number of elements in the queue

public:
    // Constructor to initialize the circular queue
    CircularQueue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    // Destructor to free dynamically allocated memory
    ~CircularQueue()
    {
        delete[] arr;
    }

    // Function to enqueue an element into the circular queue
    void enqueue(int x)
    {
        if (isFull())
        {
            std::cout << "Queue is full. Cannot enqueue.\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        if (front == -1)
        {
            front = rear;
        }
        size++;
        std::cout << x << " enqueued into the queue.\n";
    }

    // Function to dequeue an element from the circular queue
    void dequeue()
    {
        if (isEmpty())
        {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        int dequeuedItem = arr[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % capacity;
        }
        size--;
        std::cout << dequeuedItem << " dequeued from the queue.\n";
    }

    // Function to get the front element of the circular queue
    int getFront()
    {
        if (isEmpty())
        {
            std::cout << "Queue is empty.\n";
            return -1;
        }
        return arr[front];
    }

    // Function to check if the circular queue is empty
    bool isEmpty()
    {
        return size == 0;
    }

    // Function to check if the circular queue is full
    bool isFull()
    {
        return size == capacity;
    }

    // Function to get the size of the circular queue
    int getSize()
    {
        return size;
    }
};

int main()
{
    CircularQueue myQueue(5); // Create a circular queue with capacity 5

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
    myQueue.dequeue(); // Trying to dequeue from an empty circular queue

    return 0;
}
