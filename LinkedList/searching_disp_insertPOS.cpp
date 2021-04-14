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
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;

    while(1)
    {
        int choice;
        printf("\n\n Main Menu\n1.Insert last\n2.Insert First\n3.Insert After a Given position\n4.Display The List\n5.Searching\n6.Exit");
        printf("\n\n Enter Your Choice : ");
        cin>>choice;
        if(choice ==1)
        {
            int d;
            cout<<"Enter Insert Number Last "<<endl;
            cin>>d;
            struct node *newlast;
            newlast = (struct node*) malloc(sizeof(struct node));
            newlast ->data = d;
            newlast ->next =0;
            temp = head;
            while(temp->next!=0)
            {
                temp=temp->next;
            }
            temp->next = newlast;
            temp = head;

        }
        else if(choice==2)
        {
            int c;
            cout<<"Enter Insert Number "<<endl;
            cin>>c;
            struct node *newfirst;
            newfirst = (struct node*) malloc(sizeof(struct node));
            newfirst->data = c;
            newfirst->next = head;
            head = newfirst;
            temp = head;


        }
        else if(choice==3)
        {
            int position;
            cout<<"Enter Position to insert "<<endl;
            cin>>position;

            if(position>n)
            {
                cout<<"Invalid Position !!!"<<endl;
            }
            else
            {
                struct node *inspos;
                int i=1;
                temp = head;
                while(i<position)
                {
                    temp = temp->next;
                    i++;
                }
                inspos = (struct node*) malloc(sizeof(struct node));
                int number;
                cout<<"Enter data Number "<<endl;
                cin>>number;
                inspos ->data = number;
                inspos ->next = temp->next;
                temp->next = inspos;
                temp = head;
            }
        }
        else if(choice==4)
        {
            while(temp!=0)
            {
                cout<<temp->data<<" ";
                temp = temp ->next;
            }
            cout<<endl;
        }
        else if(choice==5)
        {
            struct node *temp;
            int src;
            bool flag = false;
            cout<<"Please enter the value of Search"<<endl;
            cin>>src;
            while(temp!=0)
            {
                if(src==temp->data)
                {
                    flag = true;
                    break;
                }
                temp = temp->next;
            }
            cout<<(flag?"Found Number!!":"Not Found!!")<<endl;
        }
        else if(choice==6)
        {
            exit(0);
        }
    }
    return 0;
}
