class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int ans = x;
        int total = 0;
        while(x > 0)
        {
            total += x % 10;
            x = x / 10;
        }
        if(ans % total == 0) 
        {
            return total;
        }
        return -1;
        
    }
};