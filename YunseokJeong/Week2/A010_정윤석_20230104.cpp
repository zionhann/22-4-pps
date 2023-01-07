#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int len = s.size();
    string comp = s;

    for (int i = 1; i <= len / 2; i++)
    {
        int count = 1;
        string temp = "";
        string sub = s.substr(0, i);

        for (int j = i; j < len; j += i)
        {
            if (sub == s.substr(j, i))
                count++;
            else
            {
                if (count > 1)
                    temp += to_string(count);

                temp += sub;
                sub = s.substr(j, i);
                count = 1;
            }
        }

        if (count > 1)
            temp += to_string(count);

        temp += sub;
        count = 1;

        if (comp.size() > temp.size())
        {
            comp = temp;
        }
    }
    answer = comp.size();

    return answer;
}