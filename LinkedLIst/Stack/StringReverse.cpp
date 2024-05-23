#include<iostream>
#include<stack>
using namespace std;

void Reverse( char *c,int n){

    stack<char> S;
    for(int i =0;i<n;i++){
     S.push(c[i]);

    }

    for (int i=0;i<n;i++){
        c[i]= S.top();
    S.pop();
    }
    
    string output="";

    for(int i=0;i<n;i++){
      output += c[i];
    }
    cout<<output;
}

int main(){
    char word[40];
    cout<<"Enter the string";
    cin>>word;
    Reverse(word,5);
    
}