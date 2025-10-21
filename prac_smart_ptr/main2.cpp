#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int& ref_int() { static int v = 7; return v; }

int main() {
    // 1) 值 vs 引用
    int i = 10;
    auto  a = i;        // int
    auto& b = i;        // int&
    const auto c = i;   // const int
    const auto& d = i;  // const int&

    // 2) 引用保真：decltype(auto)
    auto           x1 = ref_int();     // int（丢失引用）
    decltype(auto) x2 = ref_int();     // int&（保留）

    // 3) 范围 for
    vector<string> vs = {"A","BC","DEF"};
    size_t total = 0;
    for (const auto& s : vs) total += s.size();

    // 4) 结构化绑定
    map<int,string> m{{1,"one"},{2,"two"}};
    for (const auto& [k,v] : m) cout << k << ":" << v << "\n";

    cout << "total=" << total << "\n";
}
