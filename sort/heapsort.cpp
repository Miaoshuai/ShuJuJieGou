/*======================================================
    > File Name: heapsort.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年04月03日 星期日 10时19分50秒
 =======================================================*/
#include <iostream>

//调堆
void adjustHeap(int a[],int index,int length)
{
    int t = a[index];
    
    for(int j = 2*index; j <= length; j = j*2)
    {
        if((j < length) && (a[j] > a[j + 1]))
        {
            j++;
        }
        if(t < a[j])
        {
            break;
        }
        a[index] = a[j];
        index = j;
    }
    a[index] = t;    
}

//建初始堆
void createHeap(int a[],int n)
{
    for(int i = n/2;i >= 1; i--)
    {
        adjustHeap(a,i,n);
    }       
}

void heapSort(int a[],int n)
{
    createHeap(a,n);
    
    for(int i = n; i > 1; i--)
    {
        a[0] = a[1];
        a[1] = a[i];
        a[i] = a[0];
        adjustHeap(a,1,i - 1);   
    }
    for(int i = 1; i <= n; i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;    
}

int main(void)
{
    int a[7] = {0,5,3,7,4,1,9};
    heapSort(a,6);
    return 0;
}
