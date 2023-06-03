//LEETCODE 125
class Solution {
public:
    bool isPalindrome(string s) {
        //TWO POINTERS
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while(left < right){
            while(left < right && !isalnum(s[left])){
                left++;
            }
            while(left<right && !isalnum(s[right])){
                right--;
            }
            if (toupper(s[left++]) != toupper(s[right--])){
                return false;
            }

        }
        return true;
    }
};