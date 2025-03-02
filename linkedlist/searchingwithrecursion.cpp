#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};
bool searchkey(struct node* head,int key){
    if(head==NULL)
         return false;
     if(head->data==key)
        return true;

        return searchkey(head->next,key);
}
int main (){
    struct node* head = new node(10);
    head->next=new node(34);
    head->next->next=new node(45);
    head->next->next->next=new node(33);
    head->next->next->next->next=new node(12);
    int key=45;

    if(searchkey(head,key))
        cout<<"yes";
    else
         cout<<"no";
    return 0;
}







