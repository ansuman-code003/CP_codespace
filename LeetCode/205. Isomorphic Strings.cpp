#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string a, string b) {
        if (a.size() != b.size()) return false;
        
        unordered_map<char, char> mapAtoB;
        unordered_map<char, char> mapBtoA;
        
        for (int i = 0; i < a.size(); i++) {
            if (mapAtoB.count(a[i]) && mapAtoB[a[i]] != b[i]) 
                return false;
            if (mapBtoA.count(b[i]) && mapBtoA[b[i]] != a[i]) 
                return false;
            
            mapAtoB[a[i]] = b[i];
            mapBtoA[b[i]] = a[i];
        }
        
        return true;
    }
};
