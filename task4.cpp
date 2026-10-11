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

int length(Node* head) // length LinkedListin uzunlugunu hesablayan funksiyadir
{
    int count = 0;
    Node* temp = head;

    while (temp != nullptr) // siyahinin sonuna, yeni nullptr-a qeder sayiriq
    {
        count++;
        temp = temp->next;
    }

    return count;
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
    int len = length(head);
    cout << "Siyahinin uzunlugu: " << len << endl; // uzunlugu cixisa veririk

    return 0;
}
