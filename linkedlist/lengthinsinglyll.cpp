#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*next;
    node(int new_data){
        data=new_data;
        next=NULL;
    }
};
int  countkey(node*head){
    int count=0;
   node* curr=head;
   while(curr!=nullptr){
    count++;
  curr= curr->next;
   }

  return count;
   }
  int main (){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(60);

 

    cout<<"No of the nodes is :"<<countkey(head);

    return 0;
  }



