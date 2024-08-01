class Solution {
public:
    int scoreOfString(string s) {
        int size = s.size();
        int total = 0;

        for (int i = 0; i < size - 1; i++) {
            if (s[i + 1] && s[i] < s[i + 1])
                total += (s[i + 1] - s[i]);
            else
                total += (s[i] - s[i + 1]);
        }
        return total;
    }
};
