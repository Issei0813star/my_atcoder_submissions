#include <iostream>
#include <string>
using namespace std;

int main() {
    char S_AB, S_AC, S_BC;
    
    cin >> S_AB >> S_AC >> S_BC;
    
    // if (S_AB == '<' && S_AC == '<' && S_BC == '<') {
    //     // A < B < C
    //     cout << "B" << endl;
    // } else if (S_AB == '<' && S_AC == '>' && S_BC == '<') {
    //     // C < A < B
    //     cout << "A" << endl;
    // } else if (S_AB == '>' && S_AC == '>' && S_BC == '<') {
    //     // B < C < A
    //     cout << "C" << endl;
    // } else if (S_AB == '>' && S_AC == '<' && S_BC == '<') {
    //     // A < C < B
    //     cout << "C" << endl;
    // } else if (S_AB == '<' && S_AC == '<' && S_BC == '>') {
    //     // A < C < B
    //     cout << "C" << endl;
    // } else if (S_AB == '>' && S_AC == '>' && S_BC == '>') {
    //     // C < B < A
    //     cout << "C" << endl;
    // }

		string str;

		if(S_AB == '<') {
			//BA
			if(S_AC == '<') {
				//B, C A
				if(S_BC == '<') {
					//CBA
					cout << 'B' << endl;
					return 0;
				}
				else {
					//BCA
					cout << 'C' << endl;
					return 0;
				}
			}
			else {
				//BAC
				cout << 'A' << endl;
				return 0;
			}
		}
		else {
			//AB
			if(S_AC == '<') {
				//CAB
				cout << 'A' << endl;
				return 0;
			}
			else {
				//A B,C
				if(S_BC == '<') {
					//ACB
					cout << 'C' << endl;
					return 0;
				}
				else {
					//ABC
					cout << 'B' << endl;
					return 0;
				}
			}
		}

    return 0;
}
