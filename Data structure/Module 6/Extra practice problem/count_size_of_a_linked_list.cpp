#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " "<< endl;
        temp = temp->next;
    }
}

int size_of_the_linked_list(Node* head)
{
    int count = 0 ;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    
    return count;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Node *head = new Node(a);
    Node *alfa = new Node(b);
    Node *beta = new Node(c);

    head->next = alfa;
    alfa->next = beta;

    print_linked_list(head);
    int size = size_of_the_linked_list(head);
    cout<< "Linked list size: " << size << endl;
    return 0;
}