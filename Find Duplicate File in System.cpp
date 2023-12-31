/* Find Duplicate File in System*/
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>> ans;
    unordered_map<string, vector<string>> contentToFilePaths;

    for (const string& path : paths) {
      istringstream iss(path);
      string rootPath;
      iss >> rootPath;  

      string fileAndContent;
      while (iss >> fileAndContent) { 
        const int l = fileAndContent.find('(');
        const int r = fileAndContent.find(')');
        const string file = fileAndContent.substr(0, l);
        const string content = fileAndContent.substr(l + 1, r - l - 1);
        const string filePath = rootPath + '/' + file;
        contentToFilePaths[content].push_back(filePath);
      }
    }

    for (const auto& [_, filePaths] : contentToFilePaths)
      if (filePaths.size() > 1)
        ans.push_back(filePaths);

    return ans;
    }
};
