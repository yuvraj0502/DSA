class Solution {
public:
    bool isNumber(std::string s) {
        int i = 0;
        int n = s.length();
        
        while (i < n && s[i]==' ') {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            i++;
        }

        bool isDigit = false;  
        bool isDot = false;    
        bool isExp = false;    
        while (i < n && isdigit(s[i])) {
            isDigit = true;
            i++;
        }

        if (i < n && s[i] == '.') {
            isDot = true;
            i++;

            while (i < n && isdigit(s[i])) {
                isDigit = true;
                i++;
            }
        }

        if (i < n && (s[i] == 'e' || s[i] == 'E')) {
            isExp = true;
            i++;

            if (i < n && (s[i] == '+' || s[i] == '-')) {
                i++;
            }

            bool expDigit = false;
            while (i < n && isdigit(s[i])) {
                expDigit = true;
                i++;
            }

            if (!expDigit) {
                return false;
            }
        }

        while (i < n && s[i]==' ') {
            i++;
        }


        return i == n && isDigit;
    }
};

