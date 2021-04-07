//This problem is available for practice on leetcode
//This problem uses the 2 pointers approach
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& vect, int k) {
        sort(vect.begin(),vect.end());
        int i,j,x,y;
        int n=vect.size();
        vector< vector< int > > ans;
        for(x=0;x<n-3;x++){
            if(x>0 && vect[x]==vect[x-1]){
                continue;
            }
            for(y=x+1;y<n-2;y++){
                if(y>x+1 && vect[y]==vect[y-1]){
                    continue;
                }
                int req=k-vect[x]-vect[y];
                i=y+1;
                j=n-1;

                while(i<j){
                    if(i>y+1 && vect[i]==vect[i-1]){
                        i++;
                        continue;
                    }
                    if(j<n-1 && vect[j]==vect[j+1]){
                        j--;
                        continue;
                    }
                    if(vect[i]+vect[j]==req){
                        ans.push_back({vect[x],vect[y],vect[i],vect[j]});
                        i++;
                        j--;
                    }else if(vect[i]+vect[j]<req){
                        i++;
                    }else{
                        j--;
                    }
                }
            }
        }

        return ans;
    }
};
