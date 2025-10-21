#include <memory>
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class ObjectManager {
    vector<shared_ptr<T>> objects;
public:
    void add(shared_ptr<T> obj) {
        objects.push_back(obj);
    }

    void printAll() {
        for (auto& obj : objects) {
            cout << *obj << endl;
        }   
    }
};

int main() {
    ObjectManager<int> mgr;
    mgr.add(make_shared<int>(1));
    mgr.add(make_shared<int>(2));
    mgr.printAll();
}
