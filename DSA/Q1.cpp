#include <iostream>

constexpr int MAX_SIZE{100}; // Maximum size of the stack

class Stack
{
private:
    int arr[MAX_SIZE];
    int top{};

public:
    Stack()
    {
        top = -1; // Initialize top of stack to -1
    }

    // Function to push an element onto the stack
    void push(int x)
    {
        if (top >= MAX_SIZE - 1)
        {
            std::cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        std::cout << x << " pushed into stack\n";
    }

    // Function to pop an element from the stack
    void pop()
    {
        if (top < 0)
        {
            std::cout << "Stack Underflow\n";
            return;
        }
        int poppedItem{arr[top--]};
        std::cout << poppedItem << " popped from stack\n";
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return top < 0;
    }

    // Function to return the top element of the stack without removing it
    int peek()
    {
        if (top < 0)
        {
            std::cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    Stack myStack;

    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    std::cout << "Top element: " << myStack.peek() << std::endl;

    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop(); // Trying to pop from an empty stack

    return 0;
}
