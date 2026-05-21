 /*
Category: Strings, Two Pointers

Approach:
- The complete string is first reversed so that the word order gets reversed.
- Then traverse the reversed string and extract each word separated by '.'.
- Every extracted word is reversed individually to restore its original character order.
- The processed words are appended into the answer string with dots between them.
- Final substring operation removes the extra leading dot added during construction.

Time Complexity: O(n)
Space Complexity: O(n)
 */
class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        int n = s.length();
        string ans;
        reverse(s.begin() , s.end());
        for(int i = 0 ; i<n ; i++){
            string word = "";
            while(i<n && s[i] != '.'){
                word += s[i];
                i++;
            }
            if(word.length() > 0){
                reverse(word.begin() , word.end());
                ans += "." + word; 
            }
        }
        return ans.substr(1);
    }
};