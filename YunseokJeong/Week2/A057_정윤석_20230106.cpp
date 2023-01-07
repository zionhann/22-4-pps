#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> cookie)
{
    int answer = 0;

    for (int i = 0; i < cookie.size() - 1; i++)
    {
        int left_sum = cookie[i];
        int right_sum = cookie[i + 1];
        int left_index = i;
        int right_index = i + 1;

        while (true)
        {

            if (left_sum == right_sum)
                answer = max(answer, left_sum);

            if (left_sum > right_sum)
            {
                if (right_index + 1 == cookie.size())
                    break;
                right_sum += cookie[++right_index];
            }
            else
            {
                if (left_index - 1 < 0)
                    break;
                left_sum += cookie[--left_index];
            }
        }
    }

    return answer;
}