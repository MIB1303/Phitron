#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left; 
    Node *right;
    Node(int val)
    {
        this->val = val ;
        this->left = NULL ;
        this->right = NULL ;
    }
};

void level_order_print(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1 .Node value ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. Oi Node niye kaj kora
        cout << f->val << " ";

        // 3. Oi Node er children push kora

        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}
Node* convert(int ar[],int n,int l,int r)
{
    if (l>r)
        return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(ar[mid]);
    Node* leftroot = convert(ar,n,l,mid-1);
    Node* rightroot = convert(ar,n,mid+1,r);
    root->left = leftroot ;
    root->right = rightroot ;
    return root ;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for (int i=0;i<n;i++)
    {
        cin>> ar[i];
    }
    Node* root = convert(ar,n,0,n-1);
    level_order_print(root);
    return 0;
}