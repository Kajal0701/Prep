int findDist(vector<int>& arr1, vector<int>& arr2)
{
    int i=0; int j = 0;
    int ans = INT_MAX;
    while(i < arr1.size() && j < arr2.size())
    {
        ans = min(abs(arr1[i] - arr2[j]), ans);
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else {
            j++;
        }
    }
    return ans;
}

unordered_map<string, vector<int>>mp;

WordDistance(vector<string>& wordsDict) {
    for(int i=0; i<wordsDict.size(); i++)
    {
        mp[wordsDict[i]].push_back(i);
    }
}

int shortest(string word1, string word2) {
    return findDist(mp[word1], mp[word2]);
}