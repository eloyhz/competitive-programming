// RPC - 2020 - 10
// Problem D. Judging Assistant for Contest

#include <bits/stdc++.h>

using namespace std;

bool match_name(string& filename, string& submitted)
{
    string ext = "";
    int i = submitted.size() - 1;
    bool has_ext = false;
    while (i >= 0)   {
        if (submitted[i] == '.')    {
            i--;
            has_ext = true;
            break;
        }
        if (!isalpha(submitted[i])) {
            break;
        }
        ext += submitted[i--];
    }
    reverse(ext.begin(), ext.end());
    if (has_ext && ext != "c" && ext != "cpp" && ext != "java" && ext != "py") {
        return false;
    }
    string name = "";
    if (has_ext)    {
        while (i >= 0)   {
            if (!isalpha(submitted[i])) {
                break;
            }
            name += submitted[i--];
        }
        reverse(name.begin(), name.end());
    }
    else    {
        name = ext;
    }
    return name == filename;
}

bool match_output(vector<string>& correct, vector<string>& submitted)
{
    if (correct.size() != submitted.size()) {
        return false;
    }
    return equal(correct.begin(), correct.end(), submitted.begin());
}

int main()
{
    string filename;
    cin >> filename;
    cin.ignore();

    string submitted_file;
    getline(cin, submitted_file);

    int return_code, time_limit, elapsed_time;
    cin >> return_code >> time_limit >> elapsed_time;

    int output_lines;
    cin >> output_lines;
    cin.ignore();
    vector<string> correct_output;
    while (output_lines--)  {
        string line;
        getline(cin, line);
        correct_output.push_back(line);
    }

    int output_lines_submitted;
    cin >> output_lines_submitted;
    cin.ignore();
    vector<string> submitted_output;
    while (output_lines_submitted--)  {
        string line;
        getline(cin, line);
        submitted_output.push_back(line);
    }

    if (!match_name(filename, submitted_file))  {
        cout << "Compile Error" << endl;
    }
    else if (return_code != 0)  {
        cout << "Run-Time Error" << endl;
    }
    else if (elapsed_time > time_limit) {
        cout << "Time Limit Exceeded" << endl;
    }
    else if (!match_output(correct_output, submitted_output))   {
        cout << "Wrong Answer" << endl;
    }
    else    {
        cout << "Correct" << endl;
    }
    return 0;
}
