#include <iostream>
int main(){

   // type conversion =conversion a  value of one data type to another
   //                 Implicit = automatic
   //                 Explicit = precede value with new data type(int)
    int age;
    std::cout<<"hello world";
    double x=(int)3.14;
    std::cout<<x;
    std::cout<<"enter your random number";
    std::cin>>x;
    std::string name;
    std::getline(std::cin,name);
    // recieving input from the user using cin and getline 
    std::cout<<"enter your  full name";
    std::getline(std::cin,name);
    std::cout<<"enter your age";
    std::cin>>age;
    std::cout<<"My name is"<<name<<"i am "<<age <<"years old!";
  // ternary operator in c++
  bool isClever=true;
//   isClever?std::cout<<"his is clever":std::cout<<" he is lazy";
//  another way writing this code is 
// std::string name;
std::cout<<(isClever? "He is clever":"He is not clever");
// we can add sring into string 
std::getline(std::cin>>std::ws, name );
name.append("@gmailc.com");

std::cout<<name;
// to display char we can use name.at(0)

// we can insert in the string  using  
// name.insert( )
}