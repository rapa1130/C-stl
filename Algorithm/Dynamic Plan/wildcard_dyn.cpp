#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define CASH_SIZE 101
using namespace std;

int cash[CASH_SIZE][CASH_SIZE];

bool WildCard2(const string& wildcard, const string& str) {
    int wildLen = wildcard.length();
    int strLen = str.length();
    if (wildLen==0&&strLen == 0) {
        return true;
    }
    if (strLen != 0 && wildLen == 0) {
        return false;
    }
    if (strLen == 0&& wildLen!=0) {
        for (int i = 0; i < wildcard.length(); i++) {
            if (wildcard.substr(i, 1) != "*") {
                return false;
            }
        }
        return true;
    }
    string nowWild = wildcard.substr(0, 1);
    int& ref=cash[wildcard.length()][str.length()];
    if(ref!=-1){
        return ref!=0;
    }
    if (nowWild == "*") {
        for (int i = 0; i <= str.length(); i++) {
            if(ref=WildCard2(wildcard.substr(1), str.substr(i))){
                return true;
            }
        }
        return false;
    }
    else if (nowWild == "?") {
        return ref=WildCard2(wildcard.substr(1), str.substr(1));
    }
    else {
        if (nowWild == str.substr(0, 1)) {
            return ref=WildCard2(wildcard.substr(1), str.substr(1));
        }
        else {
            return false;
        }
    }
}

void InitializeCash(){
    for(int i=0;i<CASH_SIZE;i++){
        for(int j=0;j<CASH_SIZE;j++){
            cash[i][j]=-1;
        }
    }
}

int main() 
{
    int testcase; cin >> testcase;
    while (testcase-- > 0) {
        string wild;
        string str;

        cin >> wild;
        int strCount; cin >> strCount;

        vector<string> correct;
        for (int i = 0; i < strCount; i++) {
            InitializeCash();
            cin >> str;
            if (WildCard2(wild, str)) {
                correct.push_back(str);
            }
        }
        sort(correct.begin(), correct.end());
        for (int i = 0; i < correct.size(); i++)
        {
            cout << correct[i] << endl;
        }
    }
}