class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;
        for (const string& e : emails) {
            string localName = e.substr(0, e.find('@'));
            localName.erase(remove(localName.begin(), localName.end(), '.'), localName.end());
            localName = localName.substr(0, localName.find('+'));
            uniqueEmails.insert(localName + e.substr(e.find('@')));
        }
        return uniqueEmails.size();
    }
};