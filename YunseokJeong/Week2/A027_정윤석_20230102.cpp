#include <string>
#include <vector>

using namespace std;

string solution(string number, int k)
{
    string answer = "";

    int answersize = number.size() - k;
    int startidx = 0; // 시작 index
    for (int i = 0; i < answersize; ++i)
    {                                   // answersize만큼 반복
        char maxint = number[startidx]; // 처음에는 startidx의 값이 최대값
        int maxidx = startidx;          // 처음에는 maxidx가 startidx
        for (int j = startidx; j <= k + i; j++)
        { // startidx부터 k+i까지 확인해서 max값 찾음 -k
            if (maxint < number[j])
            {
                maxint = number[j];
                maxidx = j;
            }
        }
        startidx = maxidx + 1;
        answer += maxint;
    }

    return answer;
}