/*======================================================
    > File Name: mergesort.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月03日 星期日 11时41分50秒
 =======================================================*/
#include <iostream>

//合并过程
void merge(int a1[],int a2[],int left,int right,int middle)
{
    for(int i = left; i <= right; i++)   //a2临时保存待排序序列
    {
        a2[i] = a1[i];
    }
    
    //开始排序
    int p1,p2;
    p1 = left;
    p2 = middle + 1;
    
    while((p1 <= middle) && (p2 <= right))
    {
        if(a2[p1] < a2[p2])
        {
            a1[left++] = a2[p1++];
        }
        else
        {
            a1[left++] = a2[p2++];
        }   
    }
    
    while(p1 <= middle)
    {
        a1[left++] = a2[p1++];
    } 

    while(p2 <= right)
    {
        a1[left] = a2[p2++];
    }    
}

//合并排序
void mergeSort(int a1[],int a2[],int left,int right)
{
    if(left < right)
    {
        int middle = (left + right)/2;
        mergeSort(a1,a2,left,middle);
        mergeSort(a1,a2,middle + 1,right);
        merge(a1,a2,left,right,middle);
    }
}

int main(void)
{
    int a[7] = {3,7,1,2,5,4,6};
    int b[7];
    mergeSort(a,b,0,6);
    for(int i = 0; i < 7; i++)
    {
        std::cout<<a[i]<<" ";
    }   
    std::cout<<std::endl;
    return 0;
}
