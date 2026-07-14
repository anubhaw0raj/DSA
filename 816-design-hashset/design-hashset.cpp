class MyHashSet {
private:
    //vector<int> hs;
    vector<bool> data;

public:

    //BF
    // MyHashSet() {}

    // void add(int key) {
    //     if(find(hs.begin(),hs.end(),key) == hs.end()){
    //         hs.push_back(key);
    //     }
    // }
    
    // void remove(int key) {
    //     auto it = find(hs.begin(),hs.end(),key);
    //     if(it != hs.end()){
    //         hs.erase(it); // find and end returns a pointer.
    //     }
    // }
    
    // bool contains(int key) {
    //     return find(hs.begin(),hs.end(),key) != hs.end();
    // }

    //Boolen array
    MyHashSet() : data(1000001, false) {}

    void add(int key) {
        data[key] = true;
    }

    void remove(int key) {
        data[key] = false;
    }

    bool contains(int key) {
        return data[key];
    }

};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */