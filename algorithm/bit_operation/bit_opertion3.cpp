/*======================================================
    > File Name: bit_opertion3.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月03日 星期日 16时51分54秒
 =======================================================*/

#include<iostream>
#include<vector>
#include<string>

int get1FromNum(int n)
{
    int count = 0;

    while(n)
    {
        ++count;
        n = (n - 1) & n;
    }
    return count;
}

int main(int argc,char **argv)
{
  std::cout<<get1FromNum(7)<<std::endl;
  return 0;
}
