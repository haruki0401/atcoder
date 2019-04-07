#include <iostream>
#include <climits> //to use INT_MAX
using namespace std;

//https://bokko.hatenablog.com/entry/20080606/1212695409

class Counter
{
  public:
    Counter(int n);
    Counter inc();
    Counter operator++();
    Counter operator++(int);
    Counter display()
    {
        cout << this->cnt << endl;
    }

  private:
    int cnt;
};

Counter::Counter(int n)
{
    this->cnt = n;
    cout << this->cnt << endl;
}

Counter Counter::inc()
{
    this->cnt++;
    cout << this->cnt << endl;
}

Counter Counter::operator++() //pre_increment
{
    if (this->cnt < INT_MAX)
    {
        this->cnt++;
    }
    return *this;
}

Counter Counter::operator++(int) //post_increment
{
    Counter c = *this;
    if (this->cnt < INT_MAX)
    {
        this->cnt++;
    }
    return c;
}

int main()
{
    Counter c(10);
    //++c;
    ++c;
    c++;
    c.display();

    //e.g.
    string s = "abc";
    string::iterator sit;

    for (sit = s.begin(); sit != s.end(); ++sit)
    {
        cout << *sit << " ";
    }
    cout << endl;

    return 0;
}