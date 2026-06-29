class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;
        for (const string& e : emails) {
            string localName = e.substr(0, e.find('@'));
            string domainName = e.substr(e.find('@'), e.length());
            localName.erase(remove(localName.begin(), localName.end(), '.'), localName.end());
            if (localName.find('+') != string::npos) {
                localName.erase(localName.find('+'), localName.length() - localName.find('+'));
            }
            uniqueEmails.insert(localName + domainName);
        }
        return uniqueEmails.size();
    }
};