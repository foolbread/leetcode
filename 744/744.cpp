class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (letters[letters.size()-1] < target)
            return letters[0];

        for (int i=0; i<letters.size(); i++)
        {
            if (letters[i] > target)
                return letters[i];
        }

        return letters[0];
    }
};
