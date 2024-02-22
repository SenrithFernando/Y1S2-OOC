#include <iostream>
#include<iomanip>
using namespace std;
int searchKey(int search);
int findMax(char suggest);

float numbers[10]={10,54,75,84,48,76,68,24,16,35};

int main() {

    int r;
    char sug;


    std::cout<<"Enter Search a value  ";
    std::cin>>r;

    std::cout<<"value : ";
    std::cout<<searchKey(r);

    std::cout<<"Want max value  (y/n) :";
    std::cin>>sug;

    std::cout<<"Max value : ";
    std::cout<<findMax(sug);
}

int searchKey(int search) {
    return numbers[search-1];
}


int findMax(char suggest){
    int x=0;
    if(suggest=='y' || suggest=='Y'){
        for(int i=0; i<=10; i++){
            if(x<numbers[i]){
                x=numbers[i];
            }else{
                x=x;
            }
        }
    }else{
        return 0;
    }

    return x;
}


