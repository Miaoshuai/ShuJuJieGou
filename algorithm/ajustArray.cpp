/*======================================================
    > File Name: ajustArray.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月12日 星期二 16时56分12秒
 =======================================================*/
#include <iostream>

bool ajustArray(int a[],int n)
{
    int *pre,*paf;
    int t;
    int flag = 0;
    pre = a;
    paf = &a[n - 1];
    
    while(true)
    {
        while(*pre & 1)
        {
            pre++;
            if(pre == paf)
            {
                return true;
            }   
        }
        while(!(*paf & 1))
        {
            paf--;
            if(pre == paf)
            {
                return true;
            }
        }
        t = *pre;
        *pre = *paf;
        *paf = t; 
        pre++;
        paf--;   
    }
}

int main(void)
{
    int a[7] = {2,4,3,1,7,6,9};
    ajustArray(a,7);
    for(auto x : a)
    {
        std::cout<<x<<" ";
    }   
    std::cout<<std::endl;
    return 0;
}
