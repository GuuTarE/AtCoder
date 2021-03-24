#include <iostream>
#include <vector>
using namespace std;
/*
** 素数判定

*/
template <typename T>
bool JudgePrimeNumber(T num){
    for(T i=2; i*i<=num; i++){
        if(num%i==0) return false;
    }
    return true;
}

/* Debug */
int main(){

    for(int i=0; i<100; i++){
        cout<<i<<" "<<JudgePrimeNumber(i)<<endl;
    }
    return 0;
}