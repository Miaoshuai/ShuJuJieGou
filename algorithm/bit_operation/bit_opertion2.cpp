/*======================================================
    > File Name: bit_opertion2.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月03日 星期日 16时36分19秒
 =======================================================*/

#include<iostream>

int get1FromNum(int n)
{
    int count = 0;
    unsigned int flag = 1;
    while(flag)
    {
        if(n & flag)
        {
            count++;
        }
        flag = flag << 1;
    }
    return count;
}


int main(int argc,char **argv)
{
  int a = 7;
  std::cout<<get1FromNum(a)<<std::endl;
  return 0;
}
