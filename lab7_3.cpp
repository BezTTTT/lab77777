#include<iostream>

using namespace std;
int adiff (int A,int B){
  int x;
  if(A>B){
    x = A-B ;
    if(x>=360){
      x= x%360;
    } 
    return x ;
  }
  if(B>A){
    x = B-A;
    if(x > 180){
      x = 360-x;
    }return x;
  }
  return 0;
}


int main(){
  cout << adiff(180,270) <<"\n";
  cout << adiff(210,45)<<"\n";
  cout << adiff(0,360)<<"\n";
  cout << adiff(10,350)<<"\n";
  cout << adiff(95,260)<<"\n";
  cout << adiff(90,-90)<<"\n";
  cout << adiff(1000,280)<<"\n";
  cout << adiff(60,244);
}
