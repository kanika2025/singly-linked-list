// #include <iostream>

// using namespace std;

// // A linked list node
// class Node {
// public:
//     int data;
//     Node* next;

//     // Constructor to initialize a new node with data
//     Node(int new_data) {
//         this->data = new_data;
//         this->next = nullptr;
//     }
// };

// // Function to traverse and print the singly linked list
// void traverseList(Node* head) {

//     // Base condition is when the head is nullptr
//     if (head == nullptr) {
//         cout << endl;
//         return;
//     }

//     // Printing the current node data
//     cout << head->data << " ";

//     // Moving to the next node
//     traverseList(head->next);
// }

// // Driver code
// int main() {
  
//     // Create a hard-coded linked list:
//     // 10 -> 20 -> 30 -> 40
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);

//     // Example of traversing the node and printing
//     traverseList(head);

//     return 0;
// }

//done by himself
#include<iostream>
using namespace std;
class node{
 public:   
    int data;
    node* next;
      node(int new_data){
       data=new_data;
       next=nullptr;
      }
    };
    void tranverselist(node* head) {
        if(head==nullptr){
            cout<<endl;
            return;
        }
        cout<<head->data<<" ";
        tranverselist(head->next);
    }
    int main (){
        node* head=new node(10);
        head->next=new node(20);
        head->next->next=new node(30);
        head->next->next->next=new node(40);

        tranverselist(head);
        return 0;
    }



