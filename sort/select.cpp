/*======================================================
    > File Name: select.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月02日 星期六 15时13分15秒
 =======================================================*/
#include <iostream>

void select(int a[],int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int t;
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main(void)
{
    int a[5] = {5,3,1,4,2};
    select(a,5);
    for(auto x : a)
    {
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
