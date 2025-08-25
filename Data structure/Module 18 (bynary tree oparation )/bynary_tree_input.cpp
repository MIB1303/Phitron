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

void level_order_print(Node *root)
{
    if (root == NULL)
    {
        cout << "Kono tree Nai ";
        return;
    }
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
void pre_order_traversal(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    pre_order_traversal(root->left);
    pre_order_traversal(root->right);
}

void in_order_traversal(Node *root)
{
    if (root == NULL)
        return;

    in_order_traversal(root->left);
    cout << root->val << " ";
    in_order_traversal(root->right);
}

void post_order_traversal(Node *root)
{
    if (root == NULL)
        return;
    post_order_traversal(root->left);
    post_order_traversal(root->right);
    cout << root->val << " ";
}

int main()
{
    Node *root = input_bynary_tree();
    cout << "level order tree" << endl;
    level_order_print(root);
    cout<< endl;
    cout << "Pre order tree" << endl;
    pre_order_traversal(root);
    cout<< endl;
    cout << "Post order tree" << endl;
    in_order_traversal(root);
    cout<< endl;
    cout << "in order tree " << endl;
    post_order_traversal(root);
    cout<< endl;
    return 0;
}