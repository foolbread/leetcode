/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    map<int,Employee*> memp;
    vector<int> cntids;
    int getImportance(vector<Employee*> employees, int id) {
        for (int i=0; i<employees.size(); i++)
        {
            memp[employees[i]->id] = employees[i];
        }

        cntids.push_back(id);
        getAllSubordinates(id);
        int sum = 0;
        for (int i=0; i<cntids.size(); i++)
        {
            sum += memp[cntids[i]]->importance;
        }

        return sum;
    }

    void getAllSubordinates(int id){
        Employee* cur = memp[id];
        for (int i=0; i<cur->subordinates.size(); i++)
        {
            cntids.push_back(cur->subordinates[i]);
            getAllSubordinates(cur->subordinates[i]);
        }
    }
};
