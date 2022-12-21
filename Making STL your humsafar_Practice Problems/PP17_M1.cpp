#include<bits/stdc++.h>
using namespace std;
#define int long long


void countNumberOfAtomsHelper(string formula, int &index, unordered_map<string, int> &cntOfAtoms, int n)
{
    // String to store the element name.
    string element = "";

    // Variable to store the count of the current atom.
    int atomCount = 0;

    while (index < n && (formula[index] != ')'))
    {
        element = "";
        atomCount = 0;

        // Check for any uppercase alphabets for the element name.
        if (isalpha(formula[index]) && isupper(formula[index]))
        {
            element = formula[index++];
        }

        // Then check if the uppercase alphabets are followed by any lowercase alphabets.
        while (index < n && isalpha(formula[index]) && islower(formula[index]))
        {
            element += formula[index++];
        }

        // Check for digits following the alphabets and update the atomCount value.
        while (index < n && isdigit(formula[index]))
        {
            atomCount = atomCount * 10 + (formula[index++] - '0');
        }

        // If there were no digits then we want to set a value of '1' for the atomCount.
        if (atomCount == 0)
        {
            atomCount = 1;
        }

        // Update the count of the element in the map.
        if (element != "")
        {
            cntOfAtoms[element] += atomCount;
        }

        // If we encounter '(' then we need to recursively process the string within ().
        if (index < n && formula[index] == '(')
        {
            index++;

            // Create a new inner map which will be populated in the recursion call.
            unordered_map<string, int> innerFormulaCnt;

            // Recursively call the function again with the new Inner map.
            countNumberOfAtomsHelper(formula, index, innerFormulaCnt, n);

            // After the recursive call, update the main map with the contents of the inner map.
            for (auto atom : innerFormulaCnt)
            {
                cntOfAtoms[atom.first] += atom.second;
            }
        }
    }

    // If we encountered ')', then we have to check if a digit follows it.
    // If a digits exists after ')' then we have to multiple all our atom's value with the digit.
    if (index < n && formula[index] == ')')
    {
        index++;
        atomCount = 0;
        // Build the complete digit value.
        while (index < n && isdigit(formula[index]))
        {
            atomCount = atomCount * 10 + (formula[index++] - '0');
        }

        // If there were no digits then we want to set a value of '1' for the atomCount.
        if (atomCount == 0)
        {
            atomCount = 1;
        }

        for (auto atom : cntOfAtoms)
        {
            cntOfAtoms[atom.first] *= atomCount;
        }
    }
}

string countNumberOfAtoms(string formula)
{
    // Map to store the count of atoms.
    unordered_map<string, int> cntOfAtoms;

    int index = 0;
    countNumberOfAtomsHelper(formula, index, cntOfAtoms, formula.size());

    // Vector that will store the final count of atoms.
    vector<pair<string, int>> atomCnt;
    for (auto atom : cntOfAtoms)
    {
        atomCnt.push_back(atom);
    }

    // Sort the vector to get elements in lexicographical order.
    sort(atomCnt.begin(), atomCnt.end());

    // String to store the final result.
    string ans = "";

    // Build a string from the vector.
    for (auto atom : atomCnt)
    {
        string element = atom.first;
        int cnt = atom.second;

        ans.append(element);
        if (cnt > 1)
        {
            ans.append(to_string(cnt));
        }
    }

    return ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s; cin>>s;
    cout<<countNumberOfAtoms(s)<<'\n';
}