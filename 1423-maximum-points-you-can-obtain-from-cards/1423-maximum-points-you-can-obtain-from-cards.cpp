class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i;
        int lsum = 0, rsum = 0, maxsum = 0;
        for (i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        maxsum = lsum;
        int j = k - 1;
        int rindex = cardPoints.size() - 1;
        while (j >= 0) {
            lsum -= cardPoints[j];
            rsum += cardPoints[rindex];
            maxsum = max(maxsum, lsum + rsum);
            rindex--;
            j--;
        }
        return maxsum;
    }
};