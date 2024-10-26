#include<bits/stdc++.h>
using namespace std;

class CWH
{
    protected:
        string title;
        float rating;
    public:
        CWH(string s , float r)
        {
            title = s;
            rating = r;
        }
        virtual void display()=0; // do nothing function --> pure virtual function

};

class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s , float r , int wc) : CWH(s , r)
        {
            words = wc;
        }
        void display()
        {
            cout << "this is an amazing text tutorial with title " << title <<endl;
            cout << "Ratings of this text tutorial is "<< rating << "out of 5 stars " << endl;
            cout << "No. of words in this text ttorial is "  << words <<endl;
        }

};

class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s , float r , float vL) : CWH(s , r)
        {
            videoLength = vL;
        }
        void display()
        {
            cout << "this is an amazing video with title " << title <<endl;
            cout << "this video has ratings "<< rating << "out of 5 stars " << endl;
            cout << "the length of this video is"  << videoLength << "minutes" <<endl;
        }
};

int main()
{
    string title;
    float rating , vLen;
    int words;

    title = "Django tutorial";
    vLen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title , rating , vLen);
    // djVideo.display();

    title = "Django tutorial text";
    words = 433;
    rating = 4.19;
    CWHText djText(title , rating , vLen);

    // djText.display();
    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();
    
}
