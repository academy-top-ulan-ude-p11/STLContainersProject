#include <iostream>
#include <array>
#include <iterator>
#include <typeinfo>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>

using namespace std;

int global = 50;

// class array - example
template <class T, int size>
class Array
{
    T array[size];
};

class User
{
    string name;
    int age;
public:
    User()
    {
        name = "";
        age = 0;
    }
    User(string name, int age) : name{ name }, age{ age } {}
    friend ostream& operator<<(ostream& out, const User& user)
    {
        out << "name: " << user.name << ", age: " << user.age;
        return out;
    }
};

int sum(int a, int b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

template <typename T1, typename T2>
auto sumTempl(T1 a, T2 b)
{
    return a + b;
}

template <typename Iterator>
void printContainer(Iterator itBegin, Iterator ItEnd)
{
    for (auto it = itBegin; it != ItEnd; it++)
        cout << *it << " ";
    cout << "\n";
}

template <typename Iterator>
void printContainerEol(Iterator itBegin, Iterator ItEnd)
{
    for (auto it = itBegin; it != ItEnd; it++)
        cout << *it << "\n";
    cout << "\n";
}

bool predicat1(int a)
{
    return a <= 3;
}

int main()
{
    srand(time(nullptr));

    //string str1 = "Hello world and people!";
    //string str2 = "Hello";
    ////cout << str1 + " " + str2 << "\n";
    ////str1.append(" people");
    //int pos = str1.find("and");
    //cout << str1.replace(pos, 3, "or") << "\n";
    
    /*
    int(*fptr)(int, int);
    fptr = sum;
    cout << fptr(10, 20) << "\n";
    fptr = mult;
    cout << fptr(10, 20) << "\n";*/

    /*auto n = 10;
    auto x = 9.08;
    auto f = true;
    auto s = "Hello";

    cout << typeid(n).name() << "\n";
    cout << typeid(x).name() << "\n";
    cout << typeid(f).name() << "\n";
    cout << typeid(s).name() << "\n";

    fptr = [](auto a, auto b) { return a + b; };

    cout << fptr(10, 20) << "\n";

    cout << sumTempl(10, 20.5) << "\n";*/

    /*int b = 20;
    int m = 30;
    int r = 40;

    auto lambda = [&](int a)
    {
        b = a + 10;
        m = a + 60;
        r = a + 100;
    };*/

    /* stl array
    * 
    array<int, 10> arr;

    for (auto it = arr.begin(); it != arr.end(); it++)
        *it = rand() % 100;

    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    cout << "\n";

    for (auto it = arr.rbegin(); it != arr.rend(); it++)
        cout << *it << " ";
    cout << "\n";

    printContainer(arr.begin(), arr.end());
    printContainer(arr.begin() + 3, arr.end() - 2);

    cout << "\n";

    arr.fill(0);
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";
    cout << "\n";
    */

    /*
    // stl vector
    
    vector<int> vect;
    for (int i = 0; i < 10; i++)
        vect.push_back(rand() % 100);

    for (auto it = vect.begin(); it != vect.end(); it++)
        cout << *it << " ";
    cout << "\n";
    printContainer(vect.begin(), vect.end());
    vect.insert(vect.begin() + 4, 500);
    printContainer(vect.begin(), vect.end());
    vect.pop_back();
    printContainer(vect.begin(), vect.end());
    vect.erase(vect.end() - 3);
    printContainer(vect.begin(), vect.end());

    cout << "size = " << vect.size() << " capacity = " << vect.capacity() << "\n";
    vect.shrink_to_fit();
    cout << "size = " << vect.size() << " capacity = " << vect.capacity() << "\n";

    cout << boolalpha << vect.empty() << "\n";
    vect.clear();
    cout << boolalpha << vect.empty() << "\n";
    */

    /*
    // stl deque
    deque<int> deq;
    deq.push_back(0);
    for (int i = 10; i < 15; i++)
        deq.push_back(i);
    for (int i = 30; i < 35; i++)
        deq.push_front(i);
    for (auto it = deq.begin(); it != deq.end(); it++)
        cout << *it << " ";
    cout << "\n";
    printContainer(deq.begin(), deq.end());
    */

    /*
    forward_list<int> list1{ 1, 6, 1, 3, 4, 5, 2, 3, 3, 6 };
    forward_list<int> list2{ 7, 7, 8, 3, 1, 9, 1, 8, 9 };
    printContainer(list1.begin(), list1.end());
    auto itList1b = list1.begin();
    auto itList1e = list1.begin();
    auto itList2 = list2.begin();
    for(int i = 0; i < 3; i++) itList2++;
    list2.insert_after(itList2, 10);
    printContainer(list2.begin(), list2.end());

    //list1.sort();
    //list2.sort();
    //list1.merge(list2);
    //printContainer(list1.begin(), list1.end());

    itList2 = list2.begin();
    for (int i = 0; i < 3; i++) itList2++;
    for (int i = 0; i < 1; i++) itList1b++;
    for (int i = 0; i < 6; i++) itList1e++;
    list2.splice_after(itList2, list1, itList1b, itList1e);
    printContainer(list1.begin(), list1.end());
    printContainer(list2.begin(), list2.end());

    //list1.remove(3);
    printContainer(list1.begin(), list1.end());
    //list1.remove_if(predicat1);
    list1.remove_if([](int item) { return item <= 3; });
    printContainer(list1.begin(), list1.end());
    */
    
    /*
    list<int> list1;

    for (int i = 0; i < 10; i++)
        list1.push_back(rand() % 100);

    for (auto it = list1.begin(); it != list1.end(); it++)
        cout << *it << " ";
    cout << "\n";

    cout << "front = " << list1.front() << "\n";
    cout << "back = " << list1.back() << "\n";
    cout << "begin = " << *list1.begin() << "\n";
    cout << "end = " << *(--list1.end()) << "\n";
    cout << "rbegin = " << *list1.rbegin() << "\n";
    cout << "rend = " << *(--list1.rend()) << "\n";

    auto it = list1.begin();
    for (int i = 0; i < 3; i++)
        ++it;
    list1.insert(it, 100);
    printContainer(list1.begin(), list1.end());

    cout << "\n";
    */

    list<User> users;
    users.push_back(User("Joe", 23));
    users.push_back(User("Bob", 35));
    users.push_back(User("Tim", 19));
    users.push_back(User("Jim", 29));
    users.push_back(User("Bill", 32));
    printContainerEol(users.begin(), users.end());
    User sam = User("Sam", 29);
    users.insert(++++users.begin(), sam);
    printContainerEol(users.begin(), users.end());
    users.emplace(++++users.begin(), "Leo", 41);
    printContainerEol(users.begin(), users.end());


    /*auto it1 = users.begin();
    for (int i = 0; i < 3; i++) ++it1;
    cout << *it1 << "\n";*/

    
    /*auto it2 = users.begin();
    for (int i = 0; i < 5; i++) ++it2;
    cout << *it2 << "\n";

    cout << "\n";
    users.erase(it1, it2);
    printContainerEol(users.begin(), users.end());*/
    

    /*list<int> l1{ 5, 3, 3, 3, 2, 4, 5, 5, 1, 3, 2, 3, 9, 5 };
    list<int> l2{ 7, 3, 6, 8, 11 };*/

    /*
    auto it1 = ++++l1.begin();

    auto it2_begin = ++l2.begin();
    auto it2_end = ++++++l2.begin();
    //l1.splice(it1, l2);
    //l1.splice(it1, l2, it2_begin);
    l1.splice(it1, l2, it2_begin, it2_end);

    printContainer(l1.begin(), l1.end());
    printContainer(l2.begin(), l2.end());
    */

    //printContainer(l1.begin(), l1.end());
    ////l1.remove(5);
    ////erase(l1, 5);
    ////l1.remove_if([](auto item) { return item >= 5; });
    ////l1.reverse();
    ////erase_if(l1, [](auto item) { return item < 5; });
    //l1.sort();
    //l1.unique();
    //printContainer(l1.begin(), l1.end());

}
