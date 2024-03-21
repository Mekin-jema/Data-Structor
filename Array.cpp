#include <iostream>
using namespace std;
int main(){
     int arrays[]={3,3,4,5,5,6,5};
     cout<<arrays[0];
     //sizeof() =determine the size in bytes of a 
    //  // variable ,data types ,class ,objects etc
    //  double gpa=3.5;
    //  char grade ='F';
    //  std::cout<<sizeof(gpa)<<"bytes";
    //  std::cout<<sizeof(grade);
    //  char grades[]={'a','b','c'};
    //  std::cout<<sizeof(grades);
    std:string names[]={"Mekin Jemal","Abdu Sid","Kedijs Mohammed"};
    for(int i=0;i<sizeof(names)/sizeof(std::string);i++){
      std::cout<<names[i]<<endl;
    }

    int grades[]={89,90,98,97,92,93};
    for( int grade:grades){
      std::cout<<grade<<endl;
    }


    //foreach loop=loop that eases the travrsal  over an iterable data set
     // less flexiblility

  for(std::string student:names){
     std::cout<<student <<endl;
  }
       return 0;
}