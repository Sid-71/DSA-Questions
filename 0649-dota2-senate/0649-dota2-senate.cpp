class Solution {
public:
    string predictPartyVictory(string s) {
    
        queue<char>q;
        int rt =0;
        int dt =0;
        for(auto i  :s){
            q.push(i);
            if(i == 'R')rt++;
            else dt++;
        }
        int r_hatao=0;
        int d_hatao=0;
     while(rt and dt )
     {
         auto u = q.front();
         if(u == 'R')
         {
             if(r_hatao)
             {
                 q.pop();
                 r_hatao--;
                 rt--;
             }
            else {
                 d_hatao++;
                q.pop();
                q.push(u);
            }
            
         }
         if(u == 'D')
         {
             if(d_hatao)
             {
                 q.pop();
                 d_hatao--;
                 dt--;
             }
             else{
             r_hatao++;
                q.pop();
                 q.push(u);
             }
         }
     }
        
       if(rt)return "Radiant";
        return "Dire";
        
    }
};






