/*======================================================
    > File Name: binarySearch.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年06月15日 星期三 23时21分43秒
 =======================================================*/
#include <iostream>

int array[] = {1,2,3,4,5,6,7,8,9,10};

int binarySearch(int goal,int left,int right)
{
    int mid = (left + right) / 2;
    
    if(array[mid] != goal && left == right){
        return -1;
    }
    if(array[mid] == goal){
        return mid;
    }   
    else{
        if(array[mid] > goal){
            return binarySearch(goal,left,mid);
        }
        else{
            return binarySearch(goal,mid,right);
        }
    }
    return 0;
}

int main(void)
{
    std::cout<<binarySearch(8,0,9)<<std::endl;   
    return 0;
}
