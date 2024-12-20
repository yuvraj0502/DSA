class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=haystack.find(needle);
        return (index!=string::npos)?static_cast<int>(index):-1;
    }
};