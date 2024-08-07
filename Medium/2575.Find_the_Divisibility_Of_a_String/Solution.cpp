class Solution {
public:
  vector<int> divisibilityArray(string word, int m) {

    vector<int> result(word.size(), 0);
    long long composedNumber = 0;

    for (int i = 0; i < word.size(); i++) {
      composedNumber = (composedNumber * 10 + (word[i] - '0')) % m;
      if (composedNumber == 0)
        result[i] = 1;
    }
    return result;
  }
};
