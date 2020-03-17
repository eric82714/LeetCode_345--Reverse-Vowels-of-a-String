class Solution {
public:
    string reverseVowels(string s) {
        string vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int i = 0, j = s.size()-1;
        
        while(i < j) {
            if(vowels.find(s[i]) == vowels.npos) i += 1;
            if(vowels.find(s[j]) == vowels.npos) j -= 1;
                
            if(vowels.find(s[i]) != vowels.npos && vowels.find(s[j]) != vowels.npos) {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
                i += 1;
                j -= 1;
            }
        }
                
        return s;
    }
};
