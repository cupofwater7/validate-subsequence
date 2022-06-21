#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence);

int main()
{
    vector<int> array1 = { 5, 1, 22, 25, 6, -1, 8, 10 };
    vector<int> sequence = { 1, 6, -1, 10 };
    bool output = isValidSubsequence(array1, sequence);
    cout << boolalpha << bool(output);
    return 0;
}

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    // Write your code here.
    int seqidx = 0;
    for (auto num : array)
    {
        if (seqidx == sequence.size())break;

        if (num == sequence[seqidx])seqidx++;
    }
    return seqidx == sequence.size();
}