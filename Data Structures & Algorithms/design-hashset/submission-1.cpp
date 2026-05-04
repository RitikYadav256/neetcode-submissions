class MyHashSet {
public:
    unordered_map<int, bool> mp;  
    
    MyHashSet() {}

    void add(int key) {
        mp[key] = true;  
    }
    
    void remove(int key) {
        mp.erase(key);   
    }

    bool contains(int key) {
        return mp.find(key) != mp.end();  
    }
};
