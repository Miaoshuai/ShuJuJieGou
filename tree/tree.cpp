/*======================================================
    > File Name: tree.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月15日 星期五 19时41分36秒
 =======================================================*/
#include <iostream>
#include <stack>

struct BiTree
{
    int data;
    BiTree *left;
    BiTree *right;
};

void create(BiTree **root)
{
    int val;
    std::cout<<"请输入节点值:\n";
    std::cin>>val;

    if(val == -1)
    {
        *root = NULL;
    }
    else
    {
        *root = new BiTree;
        (*root)->data = val;
        create(&((*root)->left));
        create(&((*root)->right));    
    }
}

//递归先序遍历
void preOrder(BiTree *root)
{
    if(root)
    {
        std::cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

//非递归先序遍历
void preOrder1(BiTree *root)
{
    std::stack<BiTree *> stack_;
    
    while(!stack_.empty() || root)
    {
        while(root)
        {
            std::cout<<root->data<<" ";
            stack_.push(root);
            root = root->left;
        }
        while(!stack_.empty())
        {
            root = stack_.top();
            stack_.pop();
            root = root->right;
        }      
    }
}

//非递归中序遍历
void inOrder(BiTree *root)
{
    std::stack<BiTree *> stack_;
    BiTree *p = root;

    while(!stack_.empty() || p)
    {
        while(p)
        {
            stack_.push(p);
            p = p->left;
        }
        if(!stack_.empty())
        {
            p = stack_.top();
            stack_.pop();
            std::cout<<p->data<<" ";
            p = p->right;
        }
    }
}

void postOrder(BiTree *root)
{
    std::stack<BiTree *> stack_;
    BiTree *p = root;
    BiTree *q = NULL;
    while(!stack_.empty() || p)
    {
        while(p)
        {
            stack_.push(p);
            p = p->left;
        }
        if(!stack_.empty())
        {
            p = stack_.top();
            if(p->right == NULL || p->right == q)
            {
                stack_.pop();
                std::cout<<p->data<<" ";
                q = p;
                p = NULL;
            }
            else
            {
                p = p->right;
            }
        }        
    }
}

int main(void)
{
    BiTree *root;
    create(&root);
    postOrder(root);
    std::cout<<std::endl;
    return 0;
}
