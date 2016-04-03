/*======================================================
    > File Name: bit_opertion1.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月03日 星期日 16时23分14秒
 =======================================================*/

#include<iostream>

int get1FromNumber(int n)
{
    int count = 0;
    while(n)
    {
        if(n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main(int argc,char **argv)
{
  int a = 7;
  std::cout<<get1FromNumber(a)<<std::endl;
  return 0;
}
