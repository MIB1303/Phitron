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
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

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

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void rep_with_cos(Node *&root)
{
    if (!root)
    {
        return;
    }
    queue<pair<Node *, Node *>> q;
    q.push({root, NULL});

    while (!q.empty())
    {
        int level_s = q.size();
        vector<Node *> l_node;
        map<Node *, int> sib_c;
        for (int i = 0; i < level_s; i++)
        {
            Node *node = q.front().first;
            Node *parent = q.front().second;
            q.pop();

            l_node.push_back(node);
            if (parent)
                sib_c[parent]++;

            if (node->left)
            {
                q.push({node->left, node});
            }
            if (node->right)
            {
                q.push({node->right, node});
            }
        }
        int total = l_node.size();
        for (Node *node : l_node)
        {
            int sib = 0;
            for (auto p : sib_c)
            {
                if (p.first->left == node || p.first->right == node)
                {
                    sib = p.second - 1;
                    break;
                }
            }
            node->val = total - sib - 1;
        }
    }
}
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {

        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    Node *root = input_tree();
    rep_with_cos(root);
    level_order(root);
    return 0;
}