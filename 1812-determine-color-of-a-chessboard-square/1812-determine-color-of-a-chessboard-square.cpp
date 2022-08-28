class Solution {
public:
    bool squareIsWhite(string coordinates) {
        // 0 + 0 = 0 even = black false
        // 0 + 1 = 1 odd = white true
          int c = int(coordinates[0]); // int value of first character
        int d = int(coordinates[1] - 48); // to extract number from the string
        if(c % 2 == 0 && d % 2 == 0) return 0; // if int value of char is even and number is also even then its black
        if(c % 2 != 0 && d % 2 != 0) return 0; // if char is odd and number is odd then also its black
        return 1; // else its white
    }
};