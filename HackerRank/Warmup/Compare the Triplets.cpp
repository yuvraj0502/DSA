vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice=0;
    int bob=0;
    vector<int> total(2);
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            alice++;
        }
        if(a[i]<b[i]){
            bob++;
        }
    }
     total[0]=alice;
        total[1]=bob;
        return total;
}