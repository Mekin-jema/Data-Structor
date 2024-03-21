#include <iostream>
#include <vector>
// namespace first{
//     int x=4;


// }
// namespace second{
//     int x=6;
// }

// typedef  std::vector<std::pair<std::string,int>>pairList_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t=std::string;// the using keyword is moe popular than the typedef one 
using number_t=int;

int main(){
    text_t firstName="Mekin";
    std::cout<<firstName<<'\n';
    number_t age=21;
    std::cout<<age;
    // using  namespace first;
    std::cout<<"hello world";
    //data types 
    //double ,int ,float, char,String
    char grade='A';
    bool isStudent=true;
    bool isEligible =false;
       //Namespace=provides a solution for prevention name conflicts
       //in large projects  .Each entity  needs  a unique name.
       // A namespace allows for identically named entities as long as the namespace are different
       int x=0;
       std::cout<<x;
    //    std::cout<<second::x;
  // typedef = reserved keyword used to create an additional name 
   //(alias ) for another data type 
   // new identifier for an existing type 
   //helps with readability and reduces type 
}