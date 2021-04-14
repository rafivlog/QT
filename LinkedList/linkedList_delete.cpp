#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *newnode,*head,*temp;
    head = 0;
    int n,num;
    cout<<"How many number of node be created ? "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        newnode = (struct node*) malloc(sizeof(struct node));
        cin>>num;
        newnode->data = num;
        newnode->next =0;
        if(head==0)
        {
            head = temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }
    temp = head ;
    while(1)
    {
        int choice;
        printf("\n\n Main Menu\n1.Delete First\n2.Delete Last\n3.Delete After a Given position\n4.Display The List\n5.Exit");
        printf("\n\n Enter Your Choice : ");
        cin>>choice;
        if(choice==1)
        {
            temp = head;
            head = temp->next;
        }
        else if(choice==2)
        {
            temp = head;
            struct node *prevnode;
            while(temp->next!=0)
            {
                prevnode = temp;
                temp = temp->next;
            }
            prevnode->next =0;
        }
        else if(choice==3)
        {
            int position;
            cout<<"Enter Position to Delete "<<endl;
            cin>>position;
            if(position>n)
            {
                cout<<"Invalid Position !!!"<<endl;
            }
            else
            {
                struct node *prevNODE;
                int i=1;
                temp = head;
                while(i<position-1)
                {
                    temp = temp->next;
                    i++;
                }
                prevNODE = temp->next;
                temp->next = prevNODE->next;
            }
        }
        else if(choice==4)
        {
            temp = head;
            while(temp!=0)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
        else if(choice==5)
        {
            exit(0);
        }
    }
    return 0;
}
