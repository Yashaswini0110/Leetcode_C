class Solution {
    public boolean lemonadeChange(int[] bills) {
        int five = 0, ten = 0; //tracking of bills 

        for (int i = 0; i < bills.length; i++) { 
            if (bills[i] == 5) {
                five++; //accept the bill
            } 
            else if (bills[i] == 10) {
                if (five > 0) { 
                    five--; //give five dollar as a change
                    ten++;  //store the ten dollar bill
                } else {
                    return false; // no changes
                    }
            } 
            else if (bills[i] == 20) {
                if (ten > 0 && five > 0) { 
                    ten--; // give ten dollar bill
                    five--; //give 5 dollar bill
                } 
                else if (five >= 3) { 
                    five -= 3; //give three five dollar bill
                } 
                else { 
                    return false; // no enough change
                }
            }
        }

        return true; //handled all transactions
    }
}
