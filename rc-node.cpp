#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iterator>

using namespace std;

class SinglyLinkedListNode{
    public:
        int data;
        SinglyLinkedListNode *next;
        SinglyLinkedListNode(int data){
            this->data = data;
            this->next = NULL;
        };
};

SinglyLinkedListNode* insertAtHead(SinglyLinkedListNode* head,int data){
    SinglyLinkedListNode* newNode;
    newNode->data = data;
    newNode->next = head;

    cout << newNode->data << endl; //3
    cout << newNode->next << endl; //0xa00000002
    cout << head->next << endl; //0x1291ec0
    cout << head->data << endl; //3
    cout << &data << endl; //0x7fff7c55b294
    cout << newNode << endl; //0x7fff7c55b320
    cout << head << endl; //0x1291ea0

    return newNode;
};

int main() {

    SinglyLinkedListNode *pointer = new SinglyLinkedListNode(3);
    
    insertAtHead(pointer, 367);
};

