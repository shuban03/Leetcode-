class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int num:stones){
            pq.push(num);
        }
        while(pq.size()>1){
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(y-x!=0){
            pq.push(y-x);
            }
        }
        if(pq.size()==0){
            return 0;
        }
        return pq.top();

    }
};