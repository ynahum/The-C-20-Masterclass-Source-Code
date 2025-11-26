#include "some_header.hpp"
#include <iostream>

//No linkage
void some_function(){
    int age {34}; // No linkage
    std::cout << "age : " << age << " &age : " << &age << std::endl;
}

const double distance{45.8}; // Internal linkage

int item_count {6}; // External linkage



extern void print_distance();
extern void print_item_count();

int main(){

    /*
    std::cout << "distance(main) : " << distance << "  &distance : " << &distance <<std::endl;

    std::cout << "-----" << std::endl;

    print_distance();

    */

#if 0
    std::cout << "item_count(main) : " << item_count << " &item_count : "
        << &item_count << std::endl;

    std::cout << "-----" << std::endl;
    print_item_count();
#endif
    std::cout << "some_const_var(main) : " << some_const_var << " &some_const_var: "
        << &some_const_var << std::endl;
    std::cout << "-----" << std::endl;
    print_some_const_var();

   
    
    return 0;
}