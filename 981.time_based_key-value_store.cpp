class TimeMap {
public:
    map<string , map<int , string>> mp ; 
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].insert({timestamp ,value}) ; 
             
    }
    
    string get(string key, int timestamp) {
        auto it = mp.find(key);
        if (it == mp.end()) {return "";}
        for (auto rit = it->second.rbegin() ; rit != it->second.rend() ; ++rit ){
            if (rit->first <=timestamp  ){ return rit->second ;}

        }return "" ;
    }
};


/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */