class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        vector<int> design(n + 1, 0);

        for(int i = 0; i < bookings.size(); i++)
        {
            int l = bookings[i][0] - 1;
            int r = bookings[i][1] - 1;
            int val = bookings[i][2];

            design[l] = design[l] + val;

            if(r + 1 < n)
            {
                design[r + 1] = design[r + 1] - val;
            }
        }

        for(int i = 1; i < n; i++)
        {
            design[i] = design[i] + design[i - 1];
        }

        design.pop_back();

        return design;
    }
};
