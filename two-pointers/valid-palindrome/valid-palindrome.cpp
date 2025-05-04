class Solution {
    public:
        bool isPalindrome(string s) {
    
            vector<char> vec;
    
            for(int i = 0; i < s.size(); i++){
    
                if(isalpha(s[i])){
                    vec.push_back(tolower(s[i]));
                }
    
                else if(isdigit(s[i])){
                    vec.push_back(s[i]);
                }
    
            }
    
            for(char c: vec) cout << c;
    
            int start = 0, end = vec.size() - 1;
    
            while(start <= end){
    
                if(vec[start] != vec[end]) return false;
    
                start++;
                end--;
    
            }
    
    
            return true;
    
    
            
        }
    };