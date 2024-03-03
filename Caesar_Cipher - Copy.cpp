#include <bits/stdc++.h>
using namespace std;
string rot_k_cipher(string S, string T, string U) {
    int K = (int(T[0]) - int(S[0])) % 26;
    string result = "";
    for (char character : U) {
        char new_char = char((int(character) - int('a') + K) % 26 + int('a'));
        result += new_char;
    }
    return result;
}
int main() {
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int N;
        cin >> N;
        string S, T, U;
        cin >> S >> T >> U;
        string result = rot_k_cipher(S, T, U);
        cout << result << endl;
    }
    return 0;
}
