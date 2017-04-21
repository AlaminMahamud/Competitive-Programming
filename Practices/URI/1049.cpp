#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  if(s == "vertebrado"){
    cin >> s;
    if(s == "ave") {
      cin >> s;
      if(s == "carnivoro") {
	cout << "aguia" << endl;
      }else {
	cout << "pomba" << endl;
      }
    }else {
      cin >> s;
      if(s == "onivoro") {
	cout << "homem" << endl;
      }
      else {
	cout << "vaca" << endl;
      }
    }
  }
  else {
    cin >> s;
    if( s == "inseto" ){
      cin >> s;
      if(s == "hematofago"){
	cout << "pulga" << endl;
	
      }else{
	cout << "lagarta" << endl;
      }
    }else{
      cin >> s;
      if( s == "hematofago")
	cout << "sanguessuga" << endl;
      else
	cout << "minhoca" << endl;
    }
  }
  return 0;
}
