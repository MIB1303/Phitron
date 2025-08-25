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
int get_maximum_hight(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left==NULL && root->right== NULL)
        return 0;
    int l=get_maximum_hight(root->left);
    int r=get_maximum_hight(root->right);
    return max(l,r)+1;
}

int main()
{
    Node *root = input_bynary_tree();
    int m_h = get_maximum_hight(root) ;
    cout<< m_h << endl;
    return 0;
}