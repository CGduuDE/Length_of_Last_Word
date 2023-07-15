/*
    Given a string s consisting of words and spaces, return the length of the last word in the string.
    A word is a maxima substring consisting of non-space characters only.

*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int a = 0;
        for(int i = s.length();i>=0;i--){
            if(s[i] != ' ' && s[i]!= '\0'){
                a++;
            }
            if (a > 0 && s[i] == ' ') break;
        }

        return a;
    }
};