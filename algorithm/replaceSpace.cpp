/*======================================================
    > File Name: replaceSpace.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月11日 星期一 14时09分04秒
 =======================================================*/
#include <iostream>

void replaceSpace(char a[])
{
    int spaceNumber = 0;
    int initLength = 0;
    int afterNumber = 0;


    //先确定有多少个空格以及字符
    int k;
    for(k = 0; a[k] != '\0'; k++)
    {
        if(a[k] == ' ')
        {
            spaceNumber++;
        }
    }
    afterNumber = k + 2*spaceNumber;
    initLength = k;

    for(int i = initLength,j = afterNumber; i >= 0; i--,j--)
    {
        if(a[i] == ' ')
        {
            a[j--] = '0';
            a[j--] = '2';
            a[j] = '%';
        }
        else
        {
            a[j] = a[i];
        }  
    }
}

int main(void)
{
    char a[100] = {"We are happy."};
    replaceSpace(a);
    std::cout<<a<<std::endl;
    return 0;
}
