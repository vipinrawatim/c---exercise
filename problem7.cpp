#include <iostream>
using namespace std;
class student
{
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int age1)
    {
        age = age1;
    }
    void set_standard(int s1)
    {
        standard = s1;
    }
    void set_first_name(string f)
    {
        first_name = f;
    }
    void set_last_name(string l)
    {
        last_name = l;
    }
    int get_age()
    {

        return age;
    }
    int get_standard()
    {

        return standard;
    }
    string get_first_name()
    {

        return first_name;
    }
    string get_last_name()
    {

        return last_name;
    }
    void to_string()
    {
        cout << age << "," << first_name << "," << last_name << "," << standard;
    }
};

int main()
{
    student s;
    int age, standard;
    string first_name, last_name;
    cin >> age >> first_name >> last_name >> standard;
    s.set_age(age);
    s.set_standard(standard);
    s.set_first_name(first_name);
    s.set_last_name(last_name);
    cout << s.get_age() << endl;
    cout << s.get_last_name() << ", " << s.get_first_name() << endl;

    cout << s.get_standard() << endl;
    cout << endl;
    s.to_string();
    return 0;
}