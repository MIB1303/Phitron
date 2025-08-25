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

int main()
{
    Node *root = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);
    Node *f = new Node(10);
    Node *g = new Node(9);
    Node *h = new Node(7);
    Node *i = new Node(8);
    Node *j = new Node(11);
    Node *k = new Node(12);
    Node *l = new Node(13);
    Node *m = new Node(14);
    Node *n = new Node(15);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = e ;
    c->left = f;
    d->left = g  ;
    e->left = h ;
    e->right=i;
    f->right = j ;
    g->right=k;
    h->right = l;
    i->left = m;
    i->right = n;

    level_order_print(root);

    return 0;
}