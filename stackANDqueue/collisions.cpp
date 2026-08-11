#include <vector>
#include <stack>
#include <algorithm> // reverse ke liye
#include <cmath>     // abs ke liye

using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {
            int current = asteroids[i];
            bool destroyed = false;

            // Collision tabhi hoga jab stack top par Positive (+) ho aur current Negative (-) ho
            while (!st.empty() && st.top() > 0 && current < 0) {
                
                // Case 1: Stack ka top chota hai current se, toh top wala phutega
                if (st.top() < abs(current)) {
                    st.pop();
                    // loop chalta rahega taaki current baaki elements se bhi takra sake
                } 
                // Case 2: Dono ka size barabar hai, toh dono phutenge
                else if (st.top() == abs(current)) {
                    st.pop();
                    destroyed = true; // current bhi khatam
                    break;            // takraav khatam
                } 
                // Case 3: Stack ka top bada hai, toh current phutega
                else {
                    destroyed = true; // current khatam
                    break;            // takraav khatam
                }
            }

            // Agar current asteroid sabse ladkar bach gaya, ya koi takraav nahi hua
            if (!destroyed) {
                st.push(current);
            }
        }

        // Stack se nikaal kar final vector banana
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top()); // push_front ki jagah push_back
            st.pop();
        }
        
        // Kyunki stack se elements ulte niklenge, isliye reverse kar do
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};