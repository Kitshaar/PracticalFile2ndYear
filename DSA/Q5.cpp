#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Function to insert a new node at the beginning of the linked list
    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        std::cout << data << " inserted at the beginning." << std::endl;
    }

    // Function to insert a new node at the end of the linked list
    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        std::cout << data << " inserted at the end." << std::endl;
    }

    // Function to display the linked list
    void display()
    {
        Node *temp = head;
        std::cout << "Linked List: ";
        while (temp != nullptr)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);
    list.insertAtEnd(30);

    list.display();

    return 0;
}
