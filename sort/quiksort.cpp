/*======================================================
    > File Name: quiksort.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年03月07日 星期一 16时28分57秒
 =======================================================*/
#include <iostream>
#include <stdio.h>

int onceSort(int a[],int low,int high)
{
    int key = a[low];

    while(low < high)
    {
        while((a[high] > key) && (high > low))
        {
            high--;
        }
        a[low] = a[high];   //如果是第二个判断条件导致退出的话说明low,high相同，下同
        while((a[low] < key) && (low < high))
        {
            low++;
        }
        a[high] = a[low];
    }
    a[low] = key;

    return low;
}

void quikSort(int a[],int low,int high)
{
    if(low < high)
    {
        int pos = onceSort(a,low,high);
        quikSort(a,low,pos - 1);
        quikSort(a,pos + 1,high);
    }
}

int main(void)
{
    int a[] = {3,2,7,6,9,8,5,4,1};
    quikSort(a,0,8);

    for(int i = 0; i < 9; i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
