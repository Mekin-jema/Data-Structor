#include <iostream>
// using namespace std;
  // int grades[]={89,90,98,97,92,93};
  // int  inputs[]={1,2,3,4,5,6,7,8,9,0};
// double getTotal(int inputs []);

int searchArray(int array[],int size ,int element);
int main(){
  // getTotal(grades)
//   //    int arrays[]={3,3,4,5,5,6,5};
//   //    cout<<arrays[0];
//      //sizeof() =determine the size in bytes of a 
//     //  // variable ,data types ,class ,objects etc
//     //  double gpa=3.5;
//     //  char grade ='F';
//     //  std::cout<<sizeof(gpa)<<"bytes";
//     //  std::cout<<sizeof(grade);
//     //  char grades[]={'a','b','c'};
//     //  std::cout<<sizeof(grades);
//     std:string names[]={"Mekin Jemal","Abdu Sid","Kedijs Mohammed"};
//     for(int i=0;i<sizeof(names)/sizeof(std::string);i++){
//       std::cout<<names[i]<<endl;
//     }

//     for( int grade:grades){
//       std::cout<<grade<<endl;
//     }


//     //foreach loop=loop that eases the travrsal  over an iterable data set
//      // less flexiblility

//   for(std::string student:names){
//      std::cout<<student <<endl;
//   }
//        return 0;

int numbers[]={1,2,3,4,5,6,7};
int size =sizeof(numbers)/sizeof(numbers[0]);
int index;
int myNum;
std::cout<<"Enter element to search for : \n";
std::cin>>myNum;
index=searchArray(numbers,size,myNum);
 }
// int  total=0;
// double getTotal(int inputs [] ){
//   for(int input:inputs){
//     total+=input;
//     std::cout<<total;


  // }
//   std::cout<<"the total sum og the student grade";
// }


int searchArray(int array[],int size ,int element){
  for (int i=0;i<size;i++){
    if (array[i]==element){
      return i;
    }
  }
  return -1;
}
