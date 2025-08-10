class Solution {
public:
    bool isPalindrome(long int x) {
       if (x < 0) {
            return false;}
        bool t;
        long int revnum=0;
        long int temp =x;
        while(temp!=0){
            int lastdigit= temp%10;
            revnum= revnum*10+lastdigit;
            temp=temp/10;}

        return (revnum == x);
    }
};