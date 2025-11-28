class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
       sort(arr1.begin(), arr1.end());
       sort(arr2.begin(), arr2.end());

       vector<int> result;
       int i = 0, j = 0;
       int n = arr1.size(), m = arr2.size();

       while(i < n && j < m) {
        if(arr1[i] == arr2[j]) {
            if(result.empty() || result.back() != arr1[i]){
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
       } 
    return result;
    }
};
