#include <iostream>
using namespace std;

int gcd(int a, int b){
    int min = a<b? a : b;
    int max=1;
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            max = i;
        }
    }
    return max;
}
int gcd2(int a , int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a= temp;
    }
    return a;
}
int main(){
    int a = 12;
    int b = 18;
    cout<<gcd(a,b)<<endl;
    cout<<gcd2(a,b);
}