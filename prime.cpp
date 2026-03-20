#include <iostream>
using namespace std;

bool isPrime(int count){
    for(int i=2;i<count;i++){
        if(count%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int count = 9;
    cout<<isPrime(count);
}