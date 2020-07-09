#include <bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;
};
class LinkedList{
private: node *head, *tail;
public: 
  LinkedList(){
    head = NULL;
    tail = NULL;
  }

  void add(int n){
    node *tmp = new node;
    tmp->data=n;
    tmp->next=NULL;

    if(head==NULL){
      head = tmp;
      tail = tmp;
    }
    else{
      tail->next = tmp;
      tail = tail->next;
    }
  }

  void display(){
    node *tmp;
    tmp = head;
    while(tmp!=NULL){
      cout<<tmp->data<<" ";
      tmp = tmp->next;
    }
  }

};

int main(){
  LinkedList *ll = new LinkedList();
  int n;
  cin>>n;
  for(int i=0,k;i<n;i++){
    cin>>k;
    ll->add(k);
  }
  ll->display();
  return 0;
}
