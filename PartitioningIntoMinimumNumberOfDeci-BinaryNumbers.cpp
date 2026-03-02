//approach - 1
//time complexity - O(l) - length of the string
//space complexity - O(1)
class Solution {
public:
    int minPartitions(string n) {
        int maxEle = *max_element(begin(n), end(n));

        return maxEle - '0';
    }
};
