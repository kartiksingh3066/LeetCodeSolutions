#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                five++;
            }
            else if (bills[i] == 10) {
                if (five > 0) {
                    five--;
                    ten++;
                } else {
                    return false;
                }
            }
            else if (bills[i] == 20) {
                if (five > 0 && ten > 0) {
                    five--;
                    ten--;
                } 
                else if (five >= 3) {
                    five -= 3;
                } 
                else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){
    Solution sol;
    vector<int>bills={5,5,10,20,5,5,5,5,5,5,5,5,5,10,5,5,20,5,20,5};
    cout<<sol.lemonadeChange(bills);
}