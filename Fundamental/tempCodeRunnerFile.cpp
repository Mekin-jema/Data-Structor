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
  
     add( x,y, z);
     dv(x,y,z);
     sub(x,y, z);
     mul(x, y, z);
      
 }
void calculate(int x, int y ){
   std::cout<<"two variable calculator";
     add( x , y);
      dv( x , y);
      sub( x , y);
      mul( x , y);
}
void calculate(in