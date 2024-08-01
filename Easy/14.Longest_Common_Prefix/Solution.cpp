class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string prefix = "";

        int size = strs[0].size();
        size_t numElements = strs.size();

        for (int i = 0; i < size; ++i) {
            char currentChar = strs[0][i];
            
            for (int j = 1; j < numElements; ++j) {
                if (i >= strs[j].size() || strs[j][i] != currentChar) {
                    return prefix;
                }
            }
            
            prefix += currentChar;
        }

        return prefix;
    }
};
