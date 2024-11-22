class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count_circular=0;
        int count_square=0;
        for(int i:students){
            if(i==0){
                count_circular++;
            }else{
                count_square++;
            }
        }
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0 && count_circular>0){
                count_circular--;
            }
            else if(sandwiches[i]==1 && count_square>0){
                count_square--;
            }
            else{
                break;
            }
        }
        return count_circular+count_square;
    }
};