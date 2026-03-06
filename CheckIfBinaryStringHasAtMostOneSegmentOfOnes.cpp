//approach - 1
//time complexity - O(n)
//space complexity - O(1)
class Solution {
public:
    bool checkOnesSegment(string s) {
        // Since the string has no leading zeros, it starts with '1'.
        // If we find "01", it means there is at least a second segment of ones.
        return s.find("01") == string::npos;
    }
};
