#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_bynary_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        // 1.Node ber kore ana
        Node *p = q.front();
        q.pop();

        // 2.Oi Node niye kaj kora
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        // 3.
        if (p->left)
            q.push(myleft);
        if (p->right)
            q.push(myright);
    }
    return root;
}

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;
    if (root->val > val)
        return search(root->left,val);
    else 
        return search(root->right,val);
}

int main()
{
    Node *root = input_bynary_tree();
    int n;
    cin >> n;
   
    if (search(root, n))
        cout << "Found " ;
    else 
        cout << "Not Found ";
    return 0;
}