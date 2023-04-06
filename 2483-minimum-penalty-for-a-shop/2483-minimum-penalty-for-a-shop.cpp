class Solution {
public:
    int bestClosingTime(string a) {
     int y =0;
     for(auto i : a)
     {
         if(i == 'Y')y++;
     }
    int time =0 ;
        int n(0);
    int ans = INT_MAX;
    for(int i=0; i<a.size(); i++)
    {
        int val = n +y;
        if(val < ans)
        {
            ans = val;
            time = i;
        }
        if(a[i] == 'Y')
        {
            y--;
        }
        else {
         n++;
        }
    }
        int val = n +y;
        if(val < ans)
        {
            ans = val;
            time = a.size();
        }
      return time;
        
        
    }
};