#include <iostream>
using namespace std;

class Node{
public:
    int data; 
    Node *next;
    
    // 當Node 有值 => data = value => next = NULL
    Node(int value) : data(value) , next(nullptr) {}
};

//type
class Linkedlist {
private: 
    Node *head; //head 不能改變

public:
    Linkedlist() : head(nullptr) {}
    
    //新增
    void append(int value){
        Node *newNode = new Node(value);
        if (head == nullptr){
            head = newNode;
            return;
        }
        Node *temp = head; // temp = node => 在不同地方，在同一個位置
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
    
    //顯示
    void display(){
        Node *temp = head;
        while (temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    //刪除
    void deleteNode(int value){
        if (head == nullptr)    return;
        
        //head.data = value
        if (head->data == value){
            Node *temp = head;
            head = head->next; //head = head.next
            delete temp;
            return;
        }

        Node *temp = head;

        //判斷刪除處
        while (temp->next != nullptr && temp->next->data != value)
            temp = temp->next;

        if (temp->next == nullptr)    return;
        
        Node *node_to_delete = temp->next;
        temp->next = temp->next->next;
        delete node_to_delete;
    }

    //釋放記憶體 => 清空
    ~Linkedlist(){
        Node *temp = head;
        
        while (temp != nullptr){
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main(){
    Linkedlist list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    cout << "original list ";
    list.display();

    list.deleteNode(20);
    cout << "delete 20 list ";
    list.display();
    
    list.deleteNode(40);
    cout << "delete 40 list ";
    list.display();
    return 0;
}
