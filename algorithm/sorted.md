## menu
- [bubble_sort](#bubble sort)
- [singly_linked_list](#singly linked list)
- [double_linked_list](#double linked list)

## bubble sort
```cpp
#include <iostream>
using namespace std;
int main() {
	int x=0;
	int n = 5;
	int array[n]={2,3,1,4,5};
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (array[i] > array[j]) {
				x = array[i];
				array[i] = array[j];
				array[j] = x;
			}
		}
	}
	for(int j = 0; j < n; j++)
		cout << array[j] << " ";
	return 0;
}	
```

## singly linked list
```cpp
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
```

## double linked list
```cpp
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
```
