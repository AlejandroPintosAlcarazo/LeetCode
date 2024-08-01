class Solution {
public:
    int finalValueAfterOperations(std::vector<std::string>& operations) {
        std::map<std::string, int> myMap = {
            {"++X", 1},
            {"X++", 1},
            {"--X", -1},
            {"X--", -1}
        };
        
        int total = 0;

        for (const auto& op : operations) {
            if (myMap.find(op) != myMap.end()) {
                total += myMap[op];
            }
        }

        return total;
    }
};
