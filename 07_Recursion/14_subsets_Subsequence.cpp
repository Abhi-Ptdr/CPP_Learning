// PRINT ALL SUBSETS OF GIVEN SET(ARRAY)
/*


#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(int nums[], int n, vector <int> output, int index, vector<vector<int>> &ans){
	//base case
	if(index >= n) {
		ans.push_back(output);
		return;
	}

	//exclude
	solve(nums,n, output, index+1, ans);

	//include
	int ele = nums[index];
	output.push_back(ele);
	solve(nums,n, output, index+1, ans);
}

int main(){
    int nums[3] = {1,2,3};
	int n = 3;

    vector<vector<int>> ans;
	vector<int> output;

	int index = 0;
	solve(nums, n, output, index, ans);

	for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}

*/


// PRINT ALL SUB-SEQUENCE OF A GIVEN SEQUENCE
/*

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans){

	//base case
	if(index >= str.length()){
		if(output.length() > 0){
			ans.push_back(output);  //"" subsequence nhi chahiye output me
		}
		return;
	}

	//exclude
	solve(str, output, index+1, ans);

	//include
	char ch = str[index];
	output.push_back(ch);
	solve(str, output, index+1, ans);
}

int main(){
    string str = "abc";
	int n = str.length();
    vector<string> ans;
	string output = "";

	int index = 0;
	solve(str, output, index, ans);

	for(int i = 0; i < pow(2,n)-1; i++){   //2^n elements in power set arr named ans but we excludeded the empty string(which is also a substring)
        cout << ans[i] << " ";
    }

    return 0;
}

*/

//17. LETTER COMBINATION OF A PHONE NO.
/*
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(string digits,string output,int index,vector<string> &ans,string mapping[] ) {

	// base case
	if(index >= digits.length()){
		ans.push_back(output);
		return;
	}

	int number = digits[index] - '0';    // number = digit[index] gives ascii codes of char '2','3' and so on.
	string value = mapping[number];     // value = "abc" or "ghi" type of things

	for(int i=0; i<value.length(); i++){
		output.push_back(value[i]);
		solve(digits, output, index+1, ans, mapping);
		output.pop_back();
	}



}

int main() {

	string digits = "23";

	vector<string> ans;

	if(digits.length()==0)
		for(int i = 0; i < 9; i++){
        cout << ans[i] << " ";
    }
	
	string output;
	int index = 0;

	string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

	solve(digits, output, index, ans, mapping);

	for(int i = 0; i < 9; i++){
        cout << ans[i] << " ";
	}

	return 0;
}
*/




//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    
    bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m){
    
        if( (x>=0 && x<n) && (y>=0 && y<n) && (m[x][y] == 1) && (visited[x][y] == 0)){
            return true;
        }
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path){
        // you are currently on x, y here (x,y is current box)
        
        // base case 
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        // 4 choices - D, L, R, U
        
        // DOWN
        int newx = x+1;
        int newy = y;
        if(isSafe(newx, newy, n, visited, m)) {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        // left
        newx = x;
        newy = y-1;
        if(isSafe(newx, newy, n, visited, m)) {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        // right
        newx = x;
        newy = y+1;
        if(isSafe(newx, newy, n, visited, m)) {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        // up
        newx = x-1;
        newy = y;
        if(isSafe(newx, newy, n, visited, m)) {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        visited[x][y] = 0;
    }
    
    public:
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        
        if(m[0][0] == 0){
            return ans;
        }
        
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = m;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        solve(m, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends