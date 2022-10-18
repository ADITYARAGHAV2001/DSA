<bits/stdc++.h> 
class Node{
    public:
     int data;
     Node *next;
     Node(int data){
        this->data = data;
        this->next = NULL;
     }

};
void print(Node* &head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
}
void insertAtTail(Node* &tail, int data){
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
int main(){
Node *n1 = new Node(10);
Node *head = n1;
Node *tail = n1;
insertAtTail(tail,20);
insertAtTail(tail,30);
insertAtTail(tail,40);
insertAtTail(tail,50);
print(head);
return 0;
}