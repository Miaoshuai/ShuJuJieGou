/*======================================================
    > File Name: printList.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月11日 星期一 15时06分22秒
 =======================================================*/
#include <iostream>
#include <stack>
#include <list>

struct Node
{
    Node(int x):n(x)
    {
    
    }
    int n;
};

bool print(std::list<Node> list_)
{
    if(list_.empty())
    {
        return false;
    }
    std::stack<Node> stack_;

    for(auto x : list_)
    {
        stack_.push(x);
    }

    while(!stack_.empty())
    {
        std::cout<<stack_.top().n<<std::endl;
        stack_.pop();
    }
    return true;
}

int main(void)
{
    std::list<Node> list_;
  //  Node node1(1);
    Node node2(2);
    Node node3(3);
    list_.push_back(Node(1));
    list_.push_back(node2);
    list_.push_back(node3);
    print(list_);
}
