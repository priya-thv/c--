#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
    
    string tem;
    string str = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < str.size(); j++)
        {

            if (s[i] == str[j])
            {
             return "pangram";  
            }else
            return "not pangram";
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
