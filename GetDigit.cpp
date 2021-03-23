#include <iostream>
#include <vector>
using namespace std;
/*
** 数字の桁数を計算します

*/
template<typename Number>
int GetDigit(Number num){

  int cnt=0;
  while(num!=0){
    cnt++;
    num/=10;
  }
  return cnt;
}

/* Debug */
int main(){

  int num1=5, num2=100, num3=999999;
  long long num4=100000000000000;

  cout<<GetDigit(num1)<<endl;
  cout<<GetDigit(num2)<<endl;
  cout<<GetDigit(num3)<<endl;
  cout<<GetDigit(num4)<<endl;
  return 0;
}
