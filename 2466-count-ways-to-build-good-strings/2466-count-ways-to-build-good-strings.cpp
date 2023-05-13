class Solution {
public:
    int countGoodStrings(int low, int high, int zeroCount, int oneCount) {
      vector<long long>abhiTakKe(high+1,0);
      abhiTakKe[0] = 1;
      long long mod = 1e9+7;
      for(int i=min(zeroCount,oneCount); i<=high; i++)
      {
        // matlab abhi kya mai itne zeroes add karsakta hu kya ?  
        if(i-zeroCount>=0)
        {

            abhiTakKe[i] += abhiTakKe[i-zeroCount];
            abhiTakKe[i]%=mod;
        }
        // kya mai abhi itne ones add karsakta hu kya 
        if(i-oneCount >=0)
        {
            abhiTakKe[i] += abhiTakKe[i-oneCount];
            abhiTakKe[i]%=mod;
        }
      }

      long long ans =0;
      for(int i=low; i<=high; i++)
      {
        ans += abhiTakKe[i];
        ans%=mod;
      }
      return ans%mod;



    }
};