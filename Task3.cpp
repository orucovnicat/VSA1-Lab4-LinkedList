#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next = nullptr; // next həmişə avtomatik nullptr olur
    Node(int val)
    {
        data = val;
    }
};

bool search(Node* head, int val)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        if (temp->data == val)
        {
            return true; // element tapildi
        }
        temp = temp->next;
    }
    return false; // siyahi bitdi ve element tapilmadi
}

int main()
{
    Node* head = new Node(15);
    head->next = new Node(25);
    head->next->next = new Node(35);

    for (Node* t = head; t != nullptr; t = t->next)
    {
        cout << t->data << " ";
    }
    cout << endl;
    int target = 25; // axtardigimiz eded
    if (search(head, target))
    {
        cout << target << " " << true << endl;
    }
    else
    {
        cout << target << " " << false << endl;

    }

    target = 99;
    if (search(head, target))
    {
        cout << target << " " << true << endl;
    }
    else
    {
        cout << target << " " << false << endl;
    }

    return 0;
}
