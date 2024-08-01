class Solution {
public:
    int countTime(string time) {
        char h1 = time[0];
        char h2 = time[1];
        char m1 = time[3];
        char m2 = time[4];

        int hours_possible = 0;
        int minutes_possible = 0;

        if (h1 == '?' && h2 == '?') {
            hours_possible = 24;
        } else if (h1 == '?') {
            hours_possible = (h2 < '4') ? 3 : 2;
        } else if (h2 == '?') {
            hours_possible = (h1 < '2') ? 10 : 4;
        } else {
            hours_possible = 1;
        }

        if (m1 == '?' && m2 == '?') {
            minutes_possible = 60;
        } else if (m1 == '?') {
            minutes_possible = 6;
        } else if (m2 == '?') {
            minutes_possible = 10;
        } else {
            minutes_possible = 1;
        }

        return hours_possible * minutes_possible;
    }
};
