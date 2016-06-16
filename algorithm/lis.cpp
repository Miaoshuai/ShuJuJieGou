/*======================================================
    > File Name: lis.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年06月16日 星期四 20时51分00秒
 =======================================================*/

#include<iostream>
#include<memory>

int lis(int a[],int n){
    int len = 1;
    std::unique_ptr<int[]> d(new int[n]);
    for(int i = 0; i < n; i++){
        d[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i] >= a[j] && d[j] + 1 > d[i]){
                d[i] = d[j] + 1;
            }
        }
        if(len < d[i]){
            len = d[i];
        }
    }
    return len;
}

int main(int argc,char **argv)
{
  int a[] = {5,3,4,8,6,7};
  std::cout<<sizeof(a)/sizeof(int)<<std::endl;
  std::cout<<lis(a,sizeof(a)/sizeof(int))<<std::endl;
  return 0;
}
