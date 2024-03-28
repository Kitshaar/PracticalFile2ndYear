#include <iostream>

class Deque
{
private:
    int *arr;     // Array to store elements
    int capacity; // Maximum capacity of the deque
    int front;    // Index of the front element
    int rear;     // Index of the rear element
    int size;     // Current number of elements in the deque

public:
    // Constructor to initialize the deque
    Deque(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        front = 0;
        rear = capacity - 1;
        size = 0;
    }

    // Destructor to free dynamically allocated memory
    ~Deque()
    {
        delete[] arr;
    }

    // Function to add an element at the front of the deque
    void addFront(int x)
    {
        if (isFull())
        {
            std::cout << "Deque is full. Cannot add at front.\n";
            return;
        }
        front = (front - 1 + capacity) % capacity;
        arr[front] = x;
        size++;
        std::cout << x << " added at the front of the deque.\n";
    }

    // Function to add an element at the rear of the deque
    void addRear(int x)
    {
        if (isFull())
        {
            std::cout << "Deque is full. Cannot add at rear.\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
        std::cout << x << " added at the rear of the deque.\n";
    }

    // Function to remove an element from the front of the deque
    void removeFront()
    {
        if (isEmpty())
        {
            std::cout << "Deque is empty. Cannot remove from front.\n";
            return;
        }
        int removedItem = arr[front];
        front = (front + 1) % capacity;
        size--;
        std::cout << removedItem << " removed from the front of the deque.\n";
    }

    // Function to remove an element from the rear of the deque
    void removeRear()
    {
        if (isEmpty())
        {
            std::cout << "Deque is empty. Cannot remove from rear.\n";
            return;
        }
        int removedItem = arr[rear];
        rear = (rear - 1 + capacity) % capacity;
        size--;
        std::cout << removedItem << " removed from the rear of the deque.\n";
    }

    // Function to get the front element of the deque
    int getFront()
    {
        if (isEmpty())
        {
            std::cout << "Deque is empty.\n";
            return -1;
        }
        return arr[front];
    }

    // Function to get the rear element of the deque
    int getRear()
    {
        if (isEmpty())
        {
            std::cout << "Deque is empty.\n";
            return -1;
        }
        return arr[rear];
    }

    // Function to check if the deque is empty
    bool isEmpty()
    {
        return size == 0;
    }

    // Function to check if the deque is full
    bool isFull()
    {
        return size == capacity;
    }

    // Function to get the size of the deque
    int getSize()
    {
        return size;
    }
};

int main()
{
    Deque myDeque(5); // Create a deque with capacity 5

    myDeque.addFront(10);
    myDeque.addRear(20);
    myDeque.addFront(5);
    myDeque.addRear(15);

    std::cout << "Front element: " << myDeque.getFront() << std::endl;
    std::cout << "Rear element: " << myDeque.getRear() << std::endl;

    myDeque.removeFront();
    myDeque.removeRear();
    myDeque.removeFront();
    myDeque.removeRear();
    myDeque.removeFront(); // Trying to remove from an empty deque

    return 0;
}
