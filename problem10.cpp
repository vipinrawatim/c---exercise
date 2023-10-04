#include <iostream>
using namespace std;
class student
{

public:
    int scores;
    int total = 0;
  
    void input()
    {
        for (int i = 0; i < 5; i++)
        {

            cin >> scores;
            total += scores;
        }
    }

    int calculatetotal_scores()
    {
        return total;
    }
};
int main()
{
int num;
cin>>num;
student obj;
int s,s1,s2;
int j;

for (int i = 0; i < num; i++)
{
    // if (i==0)
    // {
        obj.input();
        s=obj.calculatetotal_scores();
        cout<<s;

    // }
    // if (i==1)
    // {
    //     obj.input();
    //     s1 = obj.calculatetotal_scores();
    // }
    // if (i==2)
    // {
    //     obj.input();
    //     s2 = obj.calculatetotal_scores();
    // }
    
    
    
}
// if (s1 > s)
// {
//     cout << "1";
// }
// else if (s2 > s)
// {
//     cout << "1";
// }
// else if (s1 > s && s2 > s)
// {
//     cout << "2";
// }
// else if (s > s2 && s > s1)
// {
//     cout << "0";
// }

    return 0;
}