#include <iostream>

     void BubbleSorts(int array1[],int temp,int size);

int main(){
    int array1[]={1,9,2,8,10,3,7,4,6,5};
    int temp;
    // int previous;
    int size=sizeof(array1)/sizeof(array1[0]);
    //  BubbleSorts(array1,temp,size);
    //  std::cout<<array1;
     for(int element:array1){
        std::cout<<element<<" ";
     }
}
  void BubbleSorts(int array1[],int size,int temp){
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j--){
            if (array1[j]<array1[j+1]){
                temp=array1[j];
                array1[j]=array1[j+1];
                array1[j+1]=temp;

            }
            }
        }
        // return 1;
     }

