#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 

using namespace std;

int main() {
    int T, B,N,x;
    cin >> T>> B >>N;
    vector<vector<int>> comp ; 
    int A[N];
    for(int i=0;i<N;i++)
    {	cin>>A[i];
    }
    
   
    for (int i = 0; i < N; i++) {
    	vector<int> row; 
        for (int j = 0; j < A[i]; j++) 
         {cin>>x;
         row.push_back(x);}
         comp.push_back(row);   
    } 
  
}



