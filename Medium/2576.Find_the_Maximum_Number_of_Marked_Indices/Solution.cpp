struct NumWithUsed {
    int value;
    bool used;
};

class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int size = nums.size();

        vector<NumWithUsed> numWithUsed(n);
        for (int i = 0; i < n; ++i) {
            numWithUsed[i].value = nums[i];
            numWithUsed[i].used = false;
        }

        sort(numWithUsed.begin(), numWithUsed.end(), [](const NumWithUsed& a, const NumWithUsed& b) {
            return a.value < b.value;
        });

        int result = 0;
        int i = 0; 
        int j = size / 2; 

        while (i < size / 2 && j < n) {
            if (numWithUsed[i].value * 2 <= numWithUsed[j].value && !numWithUsed[i].used && !numWithUsed[j].used) {
                result += 2; 
                numWithUsed[i].used = true; 
                numWithUsed[j].used = true;
                i++; 
             }
              j++;
      }
        
        return result;
    }
};

