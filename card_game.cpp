#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

void printVector( vector <int> input ,int N){
 for(int i=1;i<=N;i++){
  cout << input[i] << " " ;
 }
 cout << endl;
}
int main(void){
 int T;
 cin >> T;
 bool devu = true;
 while(T--){
  int N;
  cin >> N;
  vector <int> S(N+1);
  vector <int> P(N+1);



  for(int i=1;i<=N;i++){
   cin >> S[i];
  }
  for(int i=1;i<=N;i++){
   cin >> P[i];
  }
  //cout << "Before : " << endl;
  //printVector(S,N);
  //printVector(P,N);
  //cout << "After : " << endl;
  string win;
  cin >> win;
  if(N==2){
   cout << "Devu" << endl;
  }
  else{
  if(win == "Devu"){
   int ok=0;
   for(int i=1;i<=N;i++)
    ok += (S[i] != P[i]);
   ok == 2 ? cout << "Devu" : cout << "Churu";
   cout << endl;
  }
  else
   cout << "Churu" << endl;
  }
 }
}
