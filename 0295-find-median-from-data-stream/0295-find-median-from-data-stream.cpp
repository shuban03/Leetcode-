class MedianFinder {
public:
    priority_queue<int,vector<int>,less<int>> smallHeap;
    priority_queue<int,vector<int>,greater<int>> largeHeap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        //first push it to small heap
        smallHeap.push(num);
        //larger elements should go to larger heap
        if(!largeHeap.empty() && smallHeap.top()>largeHeap.top()){
            largeHeap.push(smallHeap.top());
            smallHeap.pop();
        }
        //if small heap is bigger
        if(smallHeap.size()>largeHeap.size()+1){
            largeHeap.push(smallHeap.top());
            smallHeap.pop();
        }
        //if large heap is bigger
        if(largeHeap.size()>smallHeap.size()+1){
            smallHeap.push(largeHeap.top());
            largeHeap.pop();
        }
        }
    
    double findMedian() {
        if(smallHeap.size()==largeHeap.size()){
            return (double)(smallHeap.top()+largeHeap.top())/2;
        }else if(smallHeap.size()>largeHeap.size()){
            return smallHeap.top();
        }else{
            return largeHeap.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */