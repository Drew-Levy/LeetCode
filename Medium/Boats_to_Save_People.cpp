class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int left=0;
        int right = people.size()-1;

        int boats=0;
        while(left<=right){
            int weight = people[left]+people[right];
            if(weight <=limit){
                 ++left;
            }
            --right;
            ++boats;
        }
        return boats;
    }
};
