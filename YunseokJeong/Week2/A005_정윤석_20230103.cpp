#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int answer = 0;

    for (auto tree : skill_trees)
    {
        string str = "";

        for (auto t_alpha : tree)
        {
            for (auto s_alpha : skill)
            {
                if (t_alpha == s_alpha)
                {
                    str += s_alpha;
                }
            }
        }

        int len = str.size();
        int check = 0;

        for (int i = 0; i < len; i++)
        {
            if (skill[i] == str[i])
            {
                check++;
            }
        }

        if (check == len)
        {
            answer++;
        }
    }

    return answer;
}