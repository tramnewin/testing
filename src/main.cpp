#include <iostream>
#include <vector>
int main (){
    std::cout<< "hello world\n";
    for(int i =0; i< 10; i++){
        if (i%2 == 0){
            std::cout<<i<< " is an even number\n";
        }else{
            std::cout<<i<<" is not an even number\n";
        }
    }
    int *p;
    vector<int> apple;
    return 0; 

}