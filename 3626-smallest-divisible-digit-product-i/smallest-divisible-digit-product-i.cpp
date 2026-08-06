class Solution {
public:
    int smallestNumber(int n, int t) {
    while(true){ 
        int prod=1; 
        int cpy=n;  
        while (cpy){ 
            int lastDigit=cpy%10;  
            prod=prod*lastDigit; 
            cpy/=10; 


        } 
        if (prod%t==0){ 
            return n; 
            
        } 
        n++;
        
        

    }
    }
};