#include <iostream>


namespace  orange{


void Print() {


std::cout<<"Print FunctionCalled"<<std::endl;




}




}

namespace hello{



void callPrint() {


orange::Print();





}




}


void Print() {

std::cout<<"Other Print Function"<<std::endl;


}



int main() {


hello::callPrint();
Print();


std::cin.get();
}