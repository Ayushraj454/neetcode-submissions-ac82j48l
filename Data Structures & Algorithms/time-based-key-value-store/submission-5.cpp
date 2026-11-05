class TimeMap {
public:

unordered_map<string,map<int,string>> m ;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].insert({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        
        auto it = m[key].upper_bound(timestamp);

        // m[key].begin() points to the first element of the map.
        // We check whether it is pointing to the first element.

        //If both are equal, it means there is no timestamp less than or equal to our  
        //       requested timestamp.
        return it == m[key].begin() ? "": prev(it) -> second ;
    }
};
