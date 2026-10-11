#include <bits/stdc++.h>
using namespace std;

struct Node {
    int student_id;
    string telebe_adi;
    double gpa;
    Node* next;
    Node(int id, string ad, double bal) {
        student_id = id;
        telebe_adi = ad;
        gpa = bal;
        next = nullptr;
    }
};


class StudentRegistry {
private:
    Node* head;

public:
    StudentRegistry() {
        head = nullptr;
    }
    void telebeElaveEt(int student_id, string ad, double gpa) {
        Node* newNode = new Node(student_id, ad, gpa);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        cout << "Telebe ugurla elave olundu!" << endl;
    }

    void telebeSil(int silinecek_id) {
        if (head == nullptr) {
            cout << "Siyahi bosdur!" << endl;
            return;
        }

        if (head->student_id == silinecek_id) {
            Node* tempNode = head;
            head = head->next;
            delete tempNode;
            cout << "Telebe (ID: " << silinecek_id << ") silindi." << endl;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->student_id != silinecek_id) {
            current = current->next;
        }

        if (current->next == nullptr) {
            cout << "Bu ID-ye uygun telebe tapilmadi." << endl;
        } else {
            Node* silinecekNode = current->next;
            current->next = current->next->next;
            delete silinecekNode;
            cout << "Telebe (ID: " << silinecek_id << ") silindi." << endl;
        }
    }

    void printAll() {
        if (head == nullptr) {
            cout << "Siyahi bosdur." << endl;
            return;
        }

        cout << endl << "--- Butun Telebeler ---" << endl;
        Node* current = head;
        while (current != nullptr) {
            cout << "ID: " << current->student_id
                 << " | Ad: " << current->telebe_adi
                 << " | GPA: " << current->gpa << endl;
            current = current->next;
        }
    }

    void gpaSeksendenCox() {
        if (head == nullptr) {
            cout << "Siyahi bosdur." << endl;
            return;
        }

        cout << endl << "--- GPA > 80 Olan Telebeler ---" << endl;
        Node* current = head;
        bool tapildi = false;
        while (current != nullptr) {
            if (current->gpa > 80) {
                cout << "ID: " << current->student_id
                     << " | Ad: " << current->telebe_adi
                     << " | GPA: " << current->gpa << endl;
                tapildi = true;
            }
            current = current->next;
        }

        if (!tapildi) {
            cout << "GPA deyeri 80-den yuxari olan telebe yoxdur." << endl;
        }
    }

    void adaGoreAxtar(string axtarilanAd) {
        if (head == nullptr) {
            cout << "Siyahi bosdur." << endl;
            return;
        }

        Node* current = head;
        bool isFound = false;
        cout << endl << "--- Axtaris Neticesi ('" << axtarilanAd << "') ---" << endl;
        while (current != nullptr) {
            if (current->telebe_adi == axtarilanAd) {
                cout << "ID: " << current->student_id
                     << " | Ad: " << current->telebe_adi
                     << " | GPA: " << current->gpa << endl;
                isFound = true;
            }
            current = current->next;
        }

        if (!isFound) {
            cout << "Bu adda telebe tapilmadi." << endl;
        }
    }

    void sayiGoster() {
        int total_count = 0;
        Node* current = head;
        while (current != nullptr) {
            total_count++;
            current = current->next;
        }
        cout << endl << "Siyahidaki umumi telebe sayi: " << total_count << endl;
    }

    ~StudentRegistry() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    StudentRegistry registry;
    int secim;

    do {
        cin >> secim;

        if (secim == 1) {
            int student_id;
            string telebe_adi;
            double gpa;

            cout << "ID daxil edin: ";
            cin >> student_id;
            cout << "Ad daxil edin: ";
            cin.ignore();
            getline(cin, telebe_adi);
            cout << "GPA daxil edin: ";
            cin >> gpa;

            registry.telebeElaveEt(student_id, telebe_adi, gpa);
        } else if (secim == 2) {
            int silinecek_id;
            cout << "Silinecek telebenin ID-sini daxil edin: ";
            cin >> silinecek_id;
            registry.telebeSil(silinecek_id);
        } else if (secim == 3) {
            registry.printAll();
        } else if (secim == 4) {
            registry.gpaSeksendenCox();
        } else if (secim == 5) {
            string axtarilanAd;
            cout << "Axtarilacaq adi daxil edin: ";
            cin.ignore();
            getline(cin, axtarilanAd);
            registry.adaGoreAxtar(axtarilanAd);
        } else if (secim == 6) {
            registry.sayiGoster();
        } else if (secim != 0) {
            cout << "Yanlis secim etdiniz!" << endl;
        }
    } while (secim != 0);

    cout << "Proqram basa catdi." << endl;
    return 0;
}
