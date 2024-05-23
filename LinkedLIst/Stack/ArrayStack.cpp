#include <iostream>
using namespace  std;

int Array[10];
int maxSize=9;
int temp=-1;
void push(int data){

    if(temp==maxSize)return;

    Array[++temp]=data;
}

void pop (){
    if(temp==-1)return;
    temp--;
}

void print(){
    for (int i=0; i<=temp; i++){
        cout<<Array[i]<<"-->";
    }

    cout<<"=============================="<<endl;
}


int main(){
 push(1);print();
 push(2);print();
 push(3);print();
 pop();print();

  push(4);print();
 push(5);print();
 

}