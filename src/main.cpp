#include <iostream>
#include <vector>
#include <stdio.h>

int main (){
    std::cout<< "hello world\n";
    for(int i =0; i< 10; i++){
        if (i%2 == 0){
            std::cout<<i<< " is an even number\n";
        }else{
            std::cout<<i<<" is not an even number\n";
        }
    }
    return 0; 

}