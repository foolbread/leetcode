class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> morseSet;
        string morseTable[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        for (int i=0; i<words.size();i++)
        {
            string str;
            for (int j=0; j<words[i].size(); j++)
            {
                str.append(morseTable[words[i][j]-'a']);
            }
            morseSet.insert(str);
        }
        
        return morseSet.size();
    }
};
