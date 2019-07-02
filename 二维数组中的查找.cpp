/*
//wrong anwser
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int low = array[0][0];
        int m=array.size();
        if(m<=0) return false;
        int n=array[0].size();
        if(n<=0) return false;
        int high=array[m-1][n-1];
        int p=m-1,q=n-1,i=m-min(m,n),j=n-min(m,n);
        
        while(i<=p&&j<=q){
            int a=(i+p)/2,b=(j+q)/2;
            if(array[a][b]<target){
                i=a+1;
                j=b+1;
            }
            else if(min(array[a][0],array[0][b])>target){
                p=a-1;
                q=b-1;
            }
            else{
                for(int k=0;k<=a;k++){
                    if(array[k][b]==target) return true;
                }
                for(int k=0;k<=b;k++){
                    if(array[a][k]==target) return true;
                }
                return false;
            }
            
        }
        return false;
         
    }
};
*/




