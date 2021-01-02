#include <iostream>




namespace hi{




int a;



void Print() {


std::cout<<"Hello World"<<std::endl;




}











}





int main() {


std::cout<<&(hi::a)<<std::endl;



}