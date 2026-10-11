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

void insert_back(Node*& head, int val) // siyahının əvvəlinə element əlavə etmək üçün funksiya yaradırıq
{
    Node* newNode = new Node(val); // yeni düyün yaradırıq
    newNode->next = head;          //  yaratdığımız düyünün next-ini head'ə bərabər edirik
    head = newNode;                // head-i bu yeni düyünə bərabər edirik
}

void insert_end(Node*& head, int val)
{
    Node* newNode = new Node(val);
    if (head == nullptr)           // siyahının boş olub-olmadığını yoxlayırıq və boşdursa head-imizi yeni node-a bərabər edirik
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)  // dövr vasitəsilə sona qədər irəliləyirik
    {
        temp = temp->next;
    }
    temp->next = newNode;          // sonuncu düyünün next-ini yeni düyünə bağlayırıq
}

int main()
{
    Node* head = nullptr;

    insert_back(head, 10);
    insert_back(head, 5);
    insert_end(head, 20);
    insert_end(head, 30);  // siyahıya sırası ilə 10, 5, 20, 30 əlavə edirik

    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " "; // LinkedList-i çıxışa veririk
        temp = temp->next;
    }

    return 0;
}
