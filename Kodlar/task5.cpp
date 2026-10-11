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
void findMinMax(Node* head) // maksimum ve minimumu tapan funksiya
{
    int minVal = INT_MAX; // minValue integer-in ala bileceyi en boyuk deyerdir
    int maxVal = INT_MIN; // maxValue integer-in ala bileceyi en kicik deyerdir
    // Note: ilk eded melum olmadiqda INT_MAX ve INT_MIN istifade ede bilerik, melum olsa ise maksimumu ve minimumu ilk deyere beraber edib muqayise ede bilerik

    Node* temp = head;
    while (temp != nullptr)
    {
        if (temp->data < minVal)
        {
            minVal = temp->data; // daha kicik element tapildi ve menimsedildi
        }
        if (temp->data > maxVal)
        {
            maxVal = temp->data; // daha boyuk element tapildi ve menimsedildi
        }
        temp = temp->next;
    }

    cout << "Minimum element: " << minVal << endl;
    cout << "Maksimum element: " << maxVal << endl;
}

int main()
{
    Node* head = new Node(45);
    head->next = new Node(12);
    head->next->next = new Node(89);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(67);

    for (Node* t = head; t != nullptr; t = t->next)
    {
        cout << t->data << " ";
    }
    cout << endl;
    findMinMax(head);

    return 0;
}
