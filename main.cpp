#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    set <int> numbers;
    int num;
    long long int sum = 0;
    while (in >> num) {
        numbers.insert(num);
    }
    for(std::set<int> :: iterator it = numbers.begin(); it != numbers.end(); ++it)
        sum += *it;

    out << sum << "\n";
    in.close();
    out.close();
    return 0;
}
