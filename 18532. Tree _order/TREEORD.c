#include<bits/stdc++.h>
#define scan(x) scanf("%i",&x)

struct Node
{
    int data;
    Node *left, *right;
}*root = NULL;

int preorder[10000],postorder[10000],inorder[10000],stack[10000];

Node *createTree(int *in,int *pre,int low,int high)
{
    static int hold = 0;

    if( low > high)
        return NULL;

    Node *temp = new Node;
    temp->data = pre[hold++];
    temp->left = temp->right = NULL;

    if(low == high)
        return temp;

    else
    {
        int i;
        for(i=low;  i<=high;    i++)
            if(in[i] == temp->data)
                break;

        temp->left = createTree(in,pre,low, i-1);
        temp->right = createTree(in,pre,i+1, high);
    }

    return temp;
}


void makeStack(Node *root, int *stk,int *index)
{
    if(root == NULL)
        return;

    makeStack(root->left,stk,index);
    makeStack(root->right,stk,index);

    stk[++(*index)] = root->data;
}

int main()
{
    int i,n;

    scan(n);

    i = 0;
    while(++i <= n) scan(preorder[i]);

    i = 0;
    while(++i <= n) scan(postorder[i]);

    i = 0;
    while(++i <= n) scan(inorder[i]);

    i = 1;
    root = createTree(inorder,preorder,1,n);

    int flag = 1,index = 0;

    makeStack(root,stack,&index);

    for(i=1;    i<=n;   i++)
        if(postorder[i] != stack[i]){
            flag = 0;
            break;
        }

    flag ? printf("yes\n") : printf("no\n");

    return 0;
}
