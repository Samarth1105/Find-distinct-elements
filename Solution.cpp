class Solution{
public:
    int distinct(vector<vector<int>> M, int N){
        unordered_map<int,int>mp;
        if(N==1){
            return 1;
        }
        
        for(int j=0;j<N;j++){
            mp[M[0][j]]=1;
        }
        int count=0;
        
        for(int i=1;i<N;i++){
            for(int j=0;j<N;j++){
                if(mp[M[i][j]]==i){
                    mp[M[i][j]] = i+1;
                    if(i==N-1 && mp[M[i][j]]==N){
                        count++;
                    }
                }
            }
        }
        
        return count;
    }
};
