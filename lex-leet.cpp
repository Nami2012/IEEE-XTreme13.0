#include <iostream>
#include<vector>

using namespace std;

void lex_arrange(vector<vector<int>> &comb)
{	    int i, j,k, min_idx=0;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < comb.size()-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < comb.size(); j++)  
        if (comb[j].size() < comb[min_idx].size())  
            min_idx = j;
        else if (comb[j].size() == comb[min_idx].size())
        	{ k=0;
        		while(comb[j][k]>comb[min_idx][k])
        			k++;
        		if(k!=comb[min_idx].size())
        			min_idx=j;
        	}
       }  
     
      for (int i = 0; i < comb[min_idx].size(); i++) 
          cout << comb[min_idx][i] << " ";
}  
void comb_sum(vector<int> &num,int N,int index,vector <int> &cur,vector<vector <int>> &comb)
{
	if(N<=0)
		{
			if(N==0){comb.insert(comb.end(),cur);}
			
		
				
            return;}

		
	if(index<num.size())
		{
			int value=num[index];
			cur.insert(cur.end(),value);
			

			comb_sum(num,N-value,index,cur,comb);
            cur.pop_back();
			comb_sum(num,N,index+1,cur,comb);
			
            
     
    	}
    	
     return;
    }	 


int main() {
    int a, b ,N;
    cin >> N >> a >> b;
    vector<int> num;
    vector<int> cur;
    vector<vector<int>> comb;
    int i=a;
    for(int j=0;j<b-a+1;j++)
    	{num.insert(num.begin()+j,i++);}
    
    comb_sum(num,N,0,cur,comb);
   
            
	 	if(comb.size()!=0)
     	{cout<<"YES"<<endl;lex_arrange(comb);}
     else
     	cout<<"NO";
        
    return 0;
}
