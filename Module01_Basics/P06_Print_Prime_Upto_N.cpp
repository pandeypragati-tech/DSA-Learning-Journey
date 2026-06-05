#include<iostream>
using namespace std ;

 bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for( int i=2 ;i<=num/2; i++ ){
        if(num%2==0){
            return false;
        }
    }
    return true;
 }
 int main(){
    int n;
    cout<< "Enter the value of n:";
    cin >> n;
    cout<< "Prime number from 2 to " <<n<<" " << "are:\n";
    for(int i=2; i<=n; i++){
        if (isPrime(i)){
            cout<< i << " ";
        }
    }
    return 0;
 }

