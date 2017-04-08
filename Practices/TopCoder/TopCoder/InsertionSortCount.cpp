#include<bits/stdc++.h>
using namespace std;


struct InsertionSortCount{
public:
int countMoves(vector <int> A)
{
    int ret = 0;
    int p = 0;
    
    
    int as = A.size();

    for(int i = 1; i < as; i++){
      if(A[p] <= A[i]){
	p++;
	A[p] = A[i];
      }else{
	int j = i-1;
	while(A[j] > A[i] && j>=0 ){
	  int t = A[j];
	  A[j] = A[i];
	  A[i] = t;
	  ret++;

	 
            
	  
	  j--;
	}
      }
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {20,40,30,10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(0, Arg1, countMoves(Arg0)); }
	void test_case_1() { int Arr0[] = {-1,1,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, countMoves(Arg0)); }
	void test_case_2() { int Arr0[] = {-1000,0,1000}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(2, Arg1, countMoves(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
InsertionSortCount ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
