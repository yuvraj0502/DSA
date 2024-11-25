class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>Radiant;
        queue<int>Dire;
        int size=senate.size();

        for(int i=0;i<size;i++){
            if(senate[i]=='R'){
                Radiant.push(i);
            }else{
                Dire.push(i);
            }
        }
        while(!Radiant.empty() && !Dire.empty()){
            int RadiantIndex=Radiant.front();
            Radiant.pop();
            int DireIndex=Dire.front();
            Dire.pop();

            if(RadiantIndex<DireIndex){
                Radiant.push(RadiantIndex+size);
            }else{
                Dire.push(DireIndex+size);
            }
        }
        return Radiant.empty()?"Dire":"Radiant";
    }
};