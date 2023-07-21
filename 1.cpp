#include <bits/stdc++.h>
using namespace std;

int s=0;
typedef
struct list_node
{
        int item;
        struct list_node *next;
        
        list_node(){
            next=nullptr;
        }
        list_node(int val){
            item=val;
            next=nullptr;
        }
        
    

}node;
void insert_at_beginning(node **head, int value){
   
            if(s>=10) {
cout<<"List can not accommodate more than MAXSIZE elements"<<endl;
           
                exit(0);
            }
            s++;
            node *neww=new node(value);
           
//           if(*head==nullptr){
//                 *head=neww;
                
//           }
            neww->next=(*head);
            (*head)=neww;
            
                
        }   
        void insert_at_end(node **head, int value){
          
            if(s>=10) {
cout<<"List can not accommodate more than MAXSIZE elements"<<endl;
           
                exit(0);
            }
     s++;
            node * neww=new node(value);
            if(*head==nullptr){
                *head=neww;
                
            }
            node* tmp=*head;
            while(tmp->next!=nullptr){
                tmp=tmp->next;
            }
             tmp->next=neww;
            

        }         
        void delete_from_beginning(node **head){
          
            s--;
            if((*head)->next==nullptr){
                (*head)==nullptr;
                
            }
            else{
                node* tmp=(*head);
               (*head)=tmp->next;
                delete tmp;
            }
            
        }             
        void delete_from_end(node **head){
          
            s--;
            node* tmp=(*head);
            while(tmp->next!=nullptr){
                tmp=tmp->next;
            }
            node * tmp2=tmp->next;
            tmp->next=nullptr;
            delete tmp2;
        }                  
        void print_list(node **head)
    {
        if(s==0){
            cout<<"List is Empty"<<endl;exit(0);
        }
        node *tmp=*head;
        while(tmp!=nullptr){
            cout<<(*head)->item<<" ";
            tmp=tmp->next;
        }
    }
    

int main() {
    node * head=nullptr;
    
    while(1){
        int n;cin>>n;
        switch(n){
            int elem;
            case 0:
                cin>>elem;
                insert_at_beginning(&head,elem);
                break;
            case 1:
                cin>>elem;
                insert_at_end(&head,elem);
                break;
            case 2:
                 delete_from_beginning(&head);
                break;
            case 3:
                delete_from_end(&head);  
                break;
            case 4:
                print_list(&head);
                break;
            default:
                cout<<"INVALID SEQUENCE OF COMMANDS"<<endl;
        }
        if(n==4) break;
    }
    
      
    return 0;
}
