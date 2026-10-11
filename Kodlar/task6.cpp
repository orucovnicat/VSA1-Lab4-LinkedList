#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next = nullptr;
    Node(int val)
    {
        data = val;
    }
};
void reverseList(Node*& head)
{
    Node* prev = nullptr;     // evvelki duyun
    Node* current = head;     // hal-hazirki duyun
    Node* nextNode = nullptr; // novbeti duyun

    while (current != nullptr)
    {
        nextNode = current->next; // sonraki duyunun unvanini yadda saxlayiriq
        current->next = prev;
        prev = current;
        current = nextNode;       // hal-hazirki node-u novbeti node-a beraber edirik
    }

    head = prev; // yeni head en sonuncu node olur
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    for (Node* t = head; t != nullptr; t = t->next)
    {
        cout << t->data << " ";
    }
    cout << endl;

    reverseList(head);

    cout << "Tersine cevrilmis: ";
    for (Node* t = head; t != nullptr; t = t->next)
    {
        cout << t->data << " ";
    }

    return 0;
}
