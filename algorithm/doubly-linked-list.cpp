#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value) : data(value) , next(nullptr) , prev(nullptr) {}
};

class DoublyLinkedList{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList() : head(nullptr) , tail(nullptr) {}

    void append(int value){
        Node *newNode = new Node(value);
        if (head == nullptr){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void display(){
        Node *cur = head;
        while (cur != nullptr){
            cout << cur->data << "<->";
            cur = cur -> next;
        }
        cout << "NULL" <<endl;
    }

    void displayReverse(){
        Node *cur = tail;
        while (cur != nullptr){
            cout << cur->data << "<->";
            cur = cur->prev;
        }
        cout << "NULL" << endl;
    }

    void DeleteNode(int value){
        if (head == nullptr)    return;
        
        Node *cur = head;
        while(cur != nullptr && cur->data != value)
           cur = cur->next;

        if (cur == nullptr)  return;
       
        if (cur->prev != nullptr)
            cur->prev->next = cur->next;
        else
            head = cur->next;

        if (cur->next != nullptr)
            cur->next->prev = cur->prev;
        else
            tail = cur->prev;
        delete cur;
    }

    ~DoublyLinkedList(){
        Node *cur = head;
        while (cur != nullptr){
            Node *next = cur->next;
            delete cur;
            cur = next;
        }
    }
};

int main() {
    DoublyLinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    cout << "初始鏈結串列: ";
    list.display();

    list.DeleteNode(20);
    cout << "刪除節點 20 後的鏈結串列: ";
    list.display();

    list.DeleteNode(40);
    cout << "刪除節點 40 後的鏈結串列: ";
    list.display();

    cout << "反向顯示鏈結串列: ";
    list.displayReverse();

    return 0;
}

