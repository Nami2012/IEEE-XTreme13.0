#include <iostream>

using namespace std;
void count( int S[], int m, int n ) 
{ 
    int i, j, x, y; 
 
    int table[n + 1][m]; 
    
    for (i = 0; i < m; i++) 
        table[0][i] = 1; 
  
    for (i = 1; i < n + 1; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0; 
   
            y = (j >= 1) ? table[i][j - 1] : 0; 
  
            // total count 
            table[i][j] = x + y; 
        } 
    } 
    for(i=0;i<n+1;i++)
    	{cout<< endl;
    	  for(j=0;j<m;j++)
    		cout<< table[i][j];
    	}
    cout <<endl <<table[--i][--j];
    
    if(table[i][j]>0)
    	{cout<<"YES"<<endl;
    	   while((table[i][j]!=0)&&(i>=0)&&(j>=0))
    		{while((table[i][j]==table[i][--j]) && (j>=0));
    		 cout<<S[j+1];
    		 while((table[i][j]==table[--i][j]) && (i>=0));
    	     ++i;
    	     }
    	}
} 		 


int main() {
    int a, b ,N;
    cin >> N >> a >> b;
    int S[b-a];
    int i =a;
    for(int j=0;j<b-a+1;j++)
    	{S[j]=i++;cout<<S[j];}
    	
    count(S,b-a+1,N);
    return 0;
}
