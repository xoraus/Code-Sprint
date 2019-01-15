#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the dynamicArray function below.
// Complete the dynamicArray function below.
vector<int> dynamicArray(int n, vector<vector<int>> queries) {

vector<vector<int>> SeqList(n,vector<int>());   // We know there are N sequences

int last_answer = 0;                        // Create last answer variable
vector<int> print_list;                    // Create a vector that will store what to print
int Qsize = queries.size();                // Find number of queries

for(int i = 0; i < Qsize; i++){
    int qtype = queries[i][0];
    int x = queries[i][1];
    int y = queries[i][2];

    if(qtype == 1){
        int seq_index = (x^last_answer)%n;      // Weired plus sign becomes ^ !!
        SeqList[seq_index].push_back(y);
        cout << y << endl;
    }else{
        int seq_index = (x^last_answer)%n;
        int seq_size = SeqList[seq_index].size();
        last_answer = SeqList[seq_index][y%seq_size];
        print_list.push_back(last_answer);
    }
}
return print_list;         // Function requires us to return this vector
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split(rtrim(nq_temp));

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    vector<vector<int>> queries(q);

    for (int i = 0; i < q; i++) {
        queries[i].resize(3);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    vector<int> result = dynamicArray(n, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
