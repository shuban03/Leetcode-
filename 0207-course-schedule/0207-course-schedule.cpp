class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses,0);
        

        //build the graph and update indegreee
        for(auto edge:prerequisites){
            int course=edge[0];
            int prerequisite=edge[1];
            
            graph[prerequisite].push_back(course);
            indegree[course]++;
        }
        
        //create a queue and push all coursees with indegree 0 to the queue(indegree 0 means courses can be taken)
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        int completed=0;    

        //bfs
        while(!q.empty()){
            int cur=q.front();
            q.pop();

            completed++;

            for(int next:graph[cur]){
                indegree[next]--;

                if(indegree[next]==0){
                    q.push(next);
                }
            }


        }
        return completed==numCourses;

    }
};