#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct node
{
    int data;
    node *left;
    node *right;
};

 node *create_root(int d)
{
     node *root = ( node *)malloc(sizeof(node));
    root->data = d;
    root->left = NULL;
    root->right = NULL;
    return root;
}

 node *create_node(int d)
{
     node *p = ( node *)malloc(sizeof(node));
    p->data = d;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void insert_num( node *root, int d)
{
     node *p = create_node(d);
     node *it1 = root;
     node *it2 = NULL;
    while (it1 != NULL)
    {
        if (d > it1->data)
        {
            it2 = it1;
            it1 = it1->right;
        }

        else if (d < it1->data)
        {
            it2 = it1;
            it1 = it1->left;
        }
    }

    if (it2->data > d)
    {
        it2->left = p;
    }
    else
    {
        it2->right = p;
    }
}


void printInorder(node* root){
    if(root == NULL)
    return;

    printInorder(root->left);

    cout<<root->data<<" ";

    printInorder(root->right);
}

int main()
{
    node *root = create_root(10);

    insert_num(root, 15);
    insert_num(root, 16);
    insert_num(root, 13);
    insert_num(root, 152);
    insert_num(root, 156);
    insert_num(root, 12);
    insert_num(root, 126);
    insert_num(root, 1);
    
    printInorder(root);

    return 0;
}