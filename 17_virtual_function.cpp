#include <iostream>
#include <cstring>
using namespace std;

class base
{
protected:
    string title;
    float rating;

public:
    base(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display() // The virtual function is only useful when the pointer are made and are pointed to the derived class
    {
        cout << "This is the display function of the base class";
    }
};

class video : public base
{
protected:
    float video_length;

public:
    video(string s, float r, float f) : base(s, r)
    {
        video_length = f;
    }
    void display()
    {
        cout << "The title of the video of the is " << title << endl;
        cout << "The rating of the video of the is " << rating << endl;
        cout << "The length of the video of the is " << video_length << endl;
    }
};

class text : public base
{
    int words;

public:
    text(string s, float r, int w) : base(s, r)
    {
        words = w;
    };
    void display()
    {
        cout << "The title of the video of the is " << title << endl;
        cout << "The rating of the video of the is " << rating << endl;
        cout << "The amounts of the words in the text tutorial of the is " << words << endl;
    }
};

int main()
{
    cout << endl;
    string xd = "constructor";
    int a = 455;
    float r = 4.15;
    float b = 5.14;

    base *pointer_base[2];
    text obj1(xd, r, a);
    video obj2(xd, r, b);

    pointer_base[0] = &obj1;
    pointer_base[0]->display();
    cout << endl;
    pointer_base[1] = &obj2;
    pointer_base[1]->display();
    return 0;
}