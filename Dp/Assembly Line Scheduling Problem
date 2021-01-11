#include <bits/stdc++.h>
using namespace std;
#define NUM_STATION 4 

int carAssembly(int a[][NUM_STATION], 
				int t[][NUM_STATION], 
				int e[], int x[]) 
{ 
    int dp[2][NUM_STATION+1];
    
    memset(dp,0,sizeof(dp));
    
    int i,j;
    
    dp[0][0]=e[0]+a[0][0];
    dp[1][0]=e[1]+a[1][0];
    
    for(j=1;j<NUM_STATION;j++){
        for(i=0;i<2;i++){
            dp[i][j]=a[i][j]+min(dp[i][j-1],t[(i+1)%2][j]+dp[(i+1)%2][j-1]);
        }
    }
    
    
    for(i=0;i<2;i++){
        dp[i][NUM_STATION]=x[i]+dp[i][NUM_STATION-1];
    }
    
    // for(i=0;i<2;i++){
    //     for(j=0;j<=NUM_STATION;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
    return min(dp[0][NUM_STATION],dp[1][NUM_STATION]);
    
    
} 

int main() 
{ 
	int a[][NUM_STATION] = {{4, 5, 3, 2},     //Here we have assumed only two lines but we can have as many as we want code will work for all with small changes.
							{2, 10, 1, 4}};               // We can also took input from the user also.
	int t[][NUM_STATION] = {{0, 7, 4, 5}, 
							{0, 9, 2, 8}}; 
	int e[] = {10, 12}, x[] = {18, 7}; 

	cout << carAssembly(a, t, e, x); 

	return 0; 
} 

