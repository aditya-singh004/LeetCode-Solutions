class RandomizedSet {
public:
    unordered_map<int, int> h;
    vector<int> v;
    RandomizedSet() {}

    bool insert(int val) {
        if (h.find(val) == h.end()) {
            v.push_back(val);
            h[val] = v.size() - 1;
            return true;
        }
        return false;
    }

    bool remove(int val) {
        if (h.find(val) != h.end()) {
            int index = h[val];
            int last = v.back();

            v[index] = last;
            h[last] = index;

            v.pop_back();
            h.erase(val);

            return true;
        }
        return false;
    }

    int getRandom() {
        int index = rand() % v.size();
        return v[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */