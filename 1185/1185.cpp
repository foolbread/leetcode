class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
       vector<string> days= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
       //zelle formula
       if (month < 3)
       {
           month += 12;
           --year;
       }

       int c = year/100;
       int y = year%100;
       int w = (y + y/4 + c/4 - 2*c + 26*(month+1)/10 + day - 1)%7;
       return days[(w+7)%7];
    }
};
