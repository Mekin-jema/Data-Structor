#include<iostream>
#include  <cmath>
double calcAreaOfCircle(double radius);
double calcCircOfCircle(double radius);

int main(){
  std::cout<<calcAreaOfCircle(335)<<std::endl;
  std::cout<<calcCircOfCircle(335);
}
double calcAreaOfCircle(double radius){
    return 3.14*std::pow(radius,2);

}
double calcCircOfCircle(double radius){
    return 2*3.14*radius;

}