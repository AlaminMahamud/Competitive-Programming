#include <bits/stdc++.h>
using namespace std;

bool check(int i){    
	int a[5];
	int c=0;
	while(i){
		a[c++] = i%10;
		i/=10;		
	}               
	for(int i2=0; i2<4; i2++){
		for(int j=i2+1; j<5; j++){
			if(a[i2]==a[j]) return false;
		}
	}
	return true;
}

bool checkBoth(int i, int j){
  bool flag[10];
	while(i){
	  int temp = i % 10;
		if(flag[temp])
		  return false;
		flag[temp] = true;
		i /= 10;
	}
	int c = 0;
	while(j){
	  c++;
	  int temp = j % 10;
		if(flag[temp])
		  return false;
		flag[temp] = true;
		j /= 10;
	}

	if(c==4 && flag[0]==false)
	  flag[0] = true;

	bool fin = false;
	for (int o = 1; o < 10; o++){
		if(!flag[o]){
		  fin = true;
		  return false;
		}
	}
	if(!fin)
	  return true;
}


// bool checkBoth(int i, int j){
// 	vector<int> iv, jv;
// 	while(i){
// 		iv.push_back(i%10);
// 	}
// 	while(j){
// 		jv.push_back(j%10);
// 	}	
// 	bool flag[10];
// 	for(int o = 0; o<10; o++){
// 		  for(vector<int>::iterator it = iv.begin(); it!=iv.end(); it++){
// 		  	if (*it == o){
// 		    	if(!flag[o]) 
// 		    		flag[o] = true;
// 		    	else 
// 		    		return false;
// 		    }
// 		  }
// 		  for(vector<int>::iterator it = jv.begin(); it!=jv.end(); it++){
// 		  	if (*it == o){
// 		    	if(!flag[o]) 
// 		    		flag[o] = true;
// 		    	else 
// 		    		return false;
// 		    }
// 		  }
// 	}
// 	if(jv.size()==4 && !flag[0]) flag[0] = true;
// 	bool finalc = false;
//  	for(int i3=0; i3<10; i3++)
//  	{
//  		if(!flag[i3])
//  			finalc = true;
//  	}	
 
//     if(finalc) return false;
//     else return true;
// }

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		bool d = false;
		for(int i=10000; i<100000 && !d; i++){
			bool b = check(i);
			if(b){
				for(int j=1000; j<50000 && !d; j++){
					bool c= check(j);
					if(c && i>j && i/j == n){
						bool e = checkBoth(i,j);
						if(e){
							d = true;
							cout << i << " / "<< j << " = "<<n<<endl; 		
						}
					}
				}
			}
		}
		if(!d)
		  cout << "There are no solutions for " << n << ".";
	}
	return 0;
}