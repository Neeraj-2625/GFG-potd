unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numSet) {
            if (!numSet.count(num - 1)) {
                int current = num, count = 1;
                while (numSet.count(current + 1)) current++, count++;
                longest = max(longest, count);
            }
        }
        return longest;