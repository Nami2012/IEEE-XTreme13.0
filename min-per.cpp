#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 

using namespace std;

int main() {
    int s1, s2,x;
    cin >> s1 >> s2;
    vector <int> A,B;
    for(int i=0;i<s1;i++)
    	{cin>>x;A.push_back(x);}
    
    for(int i=0;i<s2;i++)
    	{cin>>x;B.push_back(x);}
    	
    //for(int j=0;j<s2;j++)
    	//cin>>B[j];	
    sort(B.begin(), B.end()); 
    	
    
    int i=0,j=0;

    if(B[j]<A[i])
		{A.insert(A.begin(), B[j]);i++;j++;}
    while (j<s2)  
    { 
       if(i==int(A.size()-1))
       		{A.insert(A.end(),B[j]);
       		 break;}
               	
       if ((A[i]<B[j])&&(B[j]<A[i+1]))
       		{ A.insert(A.begin()+i+1, B[j]);
       			j++;
       		}
       	   i++;
       
    } 
  
    for(auto j=A.begin();j<A.end();j++)
    	cout<<*j<<" ";
}



