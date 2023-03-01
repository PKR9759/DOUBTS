class Solution{
public:	
	int maxSubstring(string S)
	{
	    int zeros=0,ones=0,max=-1,sum=0;
	    
	    for(int i=0;i<S.size();i++){
	        if(S[i]==1) ++ones;
	        else zeros++;
	        sum=zeros-ones;
	        if(sum<0){
	            sum=0;
	            ones=0;zeros=0;
	        } 
	        if(sum>max) max=sum;
	    }
	    return max;
	    
	}
};kadane algorithem
