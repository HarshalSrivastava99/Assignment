class Solution {
public:
    bool check(string &s,int start,int end) {
        if(start>=end)
        return true;

        if(!isalnum(s[start]))// !isalnum skip krta h non alpha numeric charcter ko
        return check(s,start+1,end);

        if(!isalnum(s[end]))// !isalnum skip krta h non alpha numeric charcter ko
        return check(s,start,end-1);

        if(tolower(s[start]) != tolower(s[end])) //tolower compare krta h small aur caps character ko
        return false;
        
        return check(s,start+1,end-1);
    }
    bool isPalindrome(string s){
        return check(s,0,s.size()-1);
    }
};