class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum = 0;
        int otherSum = 0;

        for (int num : nums) {
            if (num < 10)
                singleSum += num;
            else
                otherSum += num;
        }

        return singleSum != otherSum;
    }
};