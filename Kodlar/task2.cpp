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

void deleteValue(Node*& head, int val) {
    if (head == nullptr) return; // siyahi bosdursa hec bir emeliyyat etmirik

    if (head->data == val) { // silinecek element ilk duyundurse, yeni head-dirse bura girir
        Node* toDelete = head;
        head = head->next;    // head-i novbeti duyune keciririk
        delete toDelete;      // evvelki head-i silirik
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != val) {
        temp = temp->next; // silinecek element head deyilse, while ile gezerek elementi axtaririq
    }

    if (temp->next == nullptr) {
        cout << "Daxil edilen element siyahida tapilmadi\n";
        return;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete; // Node-u zencirden cixarib silirik
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    for (Node* t = head; t != nullptr; t = t->next) cout << t->data << " "; // ilk LinkedListi cixisa veririk
    cout << endl;

    deleteValue(head, 20); // ortadaki 20-ni silirik

    for (Node* t = head; t != nullptr; t = t->next) cout << t->data << " "; // 20 silindikden sonra cixisa veririk
    return 0;
}
