class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 1, right = 1LL * ranks[0] * cars * cars;
        while (left < right) {
            long long mid = left + (right - left) / 2;
            long long count = 0;
            for (int r : ranks) {
                count += sqrt(mid / r);
                if (count >= cars) break;
            }
            if (count >= cars) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};
