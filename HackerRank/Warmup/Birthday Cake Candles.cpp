int birthdayCakeCandles(vector<int> candles) {
   int maxcandle=candles[0];
   for(int i=0;i<candles.size();i++){
       if(candles[i]>maxcandle){
           maxcandle=candles[i];
       }
   }
   int count=0;
   for(int i=0;i<candles.size();i++){
       if(candles[i]==maxcandle){
           count++;
       }
   }
   return count;
}
