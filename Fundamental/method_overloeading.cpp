#include <iostream>

    void calculate(int x, int y ,int z);
    void calculate(int x, int y );
    void calculate(int x);
    // double calculate();

    double add(int x,int y,int z);
    double dv(int x,int y,int z);
    double sub(int x,int y,int z);
    double  mul(int x,int y,int z);

    double add(int x ,int y);
    double dv(int x ,int y);
    double sub(int x ,int y);
    double mul(int x ,int y);
//  double add(int x ,int y)
    double add(int x );
    double dv(int x );
    double sub(int x );
    double mul(int x );
//  double add(int x )
 int main(){
   

   calculate(2,3,4);
   calculate(1,2);
   calculate(10);
 }

 void calculate(int x, int y ,int z){
  std::cout<<"three variable calculator";
  
     std::cout<< add( x,y, z)<<std::endl;
    std::cout<<  dv(x,y,z)<<std::endl;
     std::cout<< sub(x,y, z)<<std::endl;
     std::cout<< mul(x, y, z)<<std::endl;
      
 }
void calculate(int x, int y ){
   std::cout<<"two variable calculator";
     std::cout<< add( x , y)<<std::endl;
      std::cout<< dv( x , y)<<std::endl;
      std::cout<< sub( x , y)<<std::endl;
      std::cout<< mul( x , y)<<std::endl;
}
void calculate(int x){
  std::cout<<"one variable calculator";
    std::cout<<  add( x )<<std::endl;
      std::cout<< dv( x )<<std::endl;
      std::cout<< sub( x )<<std::endl;
     std::cout<<  mul( x )<<std::endl;
}
// double calculate(){

// }

    double add(int x ,int y,int z){
      return x+y+z;
    }
    double dv(int x,int y,int z){
     return x/y/z;
    }
    double sub(int x,int y,int z){
        return x-y-z;
    }
    double  mul(int x,int y,int z){
         return x*y*z;
    }
// two argument and variable 
    double add(int x ,int y){
      return x+y;
    }

    double dv(int x,int y){
     return x/y;
    }
    double sub(int x,int y){
        return x-y;
    }
    double  mul(int x,int y){
         return x*y;
    }
// one variable function 
    double add(int x ){
     return x ;
    }
    double dv(int x ){
    return x;
    }
    double sub(int x ){
     return x;
    }
    double mul(int x ){
        return x;
    }